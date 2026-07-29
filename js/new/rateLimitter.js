import express from "express";
const app = express();
const users = {};
const limit = 5;
const window = 60 * 1000;
app.get("/", (req, res) => {
  const currentTime = Date.now();
  const user = req.query.user;
  if (!users[user]) {
    users[user] = {
      count: 0,
      startTime: currentTime,
    };
  }
  const userData = users[user];
  if (currentTime - userData.startTime >= window) {
    userData.count = 0;
    userData.startTime = currentTime;
  }
  if (userData.count >= limit) {
    return res.status(429).json({
      message: "Rate limiter exceed ",
    });
  }
  userData.count++;

  res.json({
    message: "user allowed",
    users,
    count: userData.count,
    resetAfter: Math.ceil(window - (currentTime - userData.startTime)) / 1000,
  });
});
app.listen(3000, () => {
  console.log(`Listening to the port 3000`);
});

console.log(users);
