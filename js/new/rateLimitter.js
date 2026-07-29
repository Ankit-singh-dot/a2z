import express from "express";
const app = express();
const users = {};
const limit = 5;
const window = 60 * 1000;
app.get("/", (req, res) => {
  const currentTime = Date.now();
  const user = req.query.user;
  if (!users[user]) {
    users[user] = [];
  }
  const userData = users[user];
  
  while (userData.length > 0 && currentTime - userData[0] >= window) {
    userData.shift();
  }
  if (userData.length >= limit) {
    return res.status(429).json({
      message: "Rate limiter exceed ",
    });
  }
   userData.push(currentTime);
  res.json({
    message: "user allowed",
    totalRequestInWindow: userData.length,
    timeStamps: userData,
    users,
    count: userData.length,
    resetAfter:
      userData.length > 0
        ? Math.ceil((window - (currentTime - userData[0])) / 1000)
        : 60,
  });
});
app.listen(3000, () => {
  console.log(`Listening to the port 3000`);
});

console.log(users);
