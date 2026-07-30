import express, { json } from "express";
import client from "./redis.js";
const app = express();
const users = {};
const limit = 5;
const window = 60 * 1000;
//  normal way of doing not implementing redist in this :
// app.get("/", async (req, res) => {
//   const currentTime = Date.now();
//   const user = req.query.user;
//   let userData = await client.get(user);
//   if (userData) {
//     userData = JSON.parse(userData);
//   } else {
//     userData = [];
//   }
//   while (userData.length > 0 && currentTime - userData[0] >= window) {
//     userData.shift();
//   }
//   if (userData.length >= limit) {
//     return res.status(429).json({
//       message: "Rate limiter exceed ",
//     });
//   }
//    userData.push(currentTime);

//   await client.set(user, JSON.stringify(userData));
//   res.json({
//     message: "user allowed",
//     totalRequestInWindow: userData.length,
//     timeStamps: userData,
//     users,
//     count: userData.length,
//     resetAfter:
//       userData.length > 0
//         ? Math.ceil((window - (currentTime - userData[0])) / 1000)
//         : 60,
//   });
// });
// app.listen(3000, () => {
//   console.log(`Listening to the port 3000`);
// });

// console.log(users);

// adding redis in this
app.get("/", async (req, res) => {
  const user = req.query.user;
  if (!user) {
    return res.status(400).json({
      message: "user is required in the field",
    });
  }
  const currrentTime = Date.now();
  await client.zRemRangeByScore(user, 0, currrentTime - window);
  const count = await client.zCard(user);
  if (count > limit) {
    return res.status(429).json({
      message: "Rate Limit Exceeded",
    });
  }

  await client.zAdd(user, {
    score: currrentTime,
    value: currrentTime.toString(),
  });
  await client.expire(user, 60);
  res.json({
    message: "Request Allowed",
    totalRequests: count + 1,
  });
});
