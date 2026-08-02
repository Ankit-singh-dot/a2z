import express, { json } from "express";
import { createClient } from "redis";
const port = 3030;
const app = express();
app.use(express.json());
const client = createClient();
client.on("error", (error) => console.log("redis client error"));
app.post("/submit", async (req, res) => {
    const problemId = req.body.problemId;
    const code = req.body.code;
    const language = req.body.language;
    const userId = req.body.userId;
    if (!req.body) {
        return res.status(400).json({ message: "Request body is missing" });
    }
    try {
        await client.lPush("problem", JSON.stringify({
            problemId,
            code,
            language,
            userId
        }));
        return res.status(200).json({
            message: "code submission is working ",
        });
    }
    catch (error) {
        res.status(404).json({
            message: "lpush is not working",
            error: error.message,
        });
    }
});
async function StartServer() {
    try {
        await client.connect();
        console.log("redis_connected");
        app.listen(port, () => {
            console.log(`listening to the port ${port}`);
        });
    }
    catch (error) {
        console.error("Failed to connect to redis", error);
    }
}
StartServer();
//# sourceMappingURL=index.js.map