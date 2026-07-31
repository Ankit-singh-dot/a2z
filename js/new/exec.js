import fs from "fs";
import express from "express";
import client from "./redis.js";
const app = express();
const script = fs.readFileSync("./rateLimiter.lua", "utf-8");

const window = 60000;
const limit = 5;

app.get("/", async (req, res) => {
  const user = req.query.user;
  const currentTime = Date.now();
  const allowed = await client.eval(script, {
    keys: [user],
    arguments: [currentTime.toString(), window.toString(), limit.toString()],
  });
    console.log({
      allowed,
      type: typeof allowed,
    });
  if (allowed === 0) {
    return res.status(429).json({
      message: "rate limit exceed",
    });
  }
  res.json({
    message: "Allowed",
  });
});

app.listen(4000, () => {
  console.log("listening to the port 4000");
});



