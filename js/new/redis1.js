import { createClient } from "redis";
const redisClient = await createClient().connect();
const user = {
  name: "ankit",
  age: 40,
  email: "ankitrajdihara123@gmail.com",
};

const result = await redisClient.set("user", JSON.stringify(user));
console.log(result);
const a = await redisClient.disconnect();
