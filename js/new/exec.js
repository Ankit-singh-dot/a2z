import fs from "fs";
import client from "./redis.js";
const script = fs.readFileSync("./rateLimiter.lua", "utf-8");
const result = await client.eval(script, {
  keys: [user],
  arguments: [],
});

console.log(result);
