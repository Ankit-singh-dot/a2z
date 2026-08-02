import { createClient } from "redis";
const client = createClient();
async function processSubmission(submission) {
    const { problemId, code, language, userId } = JSON.parse(submission);
    console.log(`processing submission of the the ${problemId}`);
    console.log(`processing submission of the the ${code}`);
    console.log(`processing submission of the the ${language}`);
    console.log(`processing submission of the the ${userId}`);
    await new Promise((resolve) => setTimeout(resolve, 1000));
    console.log(`finished submission code for ${problemId}`);
}
async function startWorker() {
    try {
        await client.connect();
        console.log("worker connected to redis ");
        while (1) {
            try {
                const submission = await client.brPop("problem", 0);
                await processSubmission(submission.element);
            }
            catch (error) {
                console.log("error processing the submission", error);
            }
        }
    }
    catch (error) {
        console.error("Failed to connect to redis", error);
    }
}
startWorker();
//# sourceMappingURL=index.js.map