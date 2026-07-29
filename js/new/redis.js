import { createClient } from "redis";
const client = createClient({
  url: "redis://localhost:6379",
});

client.on("error", (err) => {
  console.log("redis error", err);
});
await client.connect();
console.log("redis connceted ");
export default client;
