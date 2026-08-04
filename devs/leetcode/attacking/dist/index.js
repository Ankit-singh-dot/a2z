import express from "express";
const app = express();
app.use(express.json());
const otpStore = {};
//  Record<KeyType, ValueType> represent key and value
app.post("/generate-otp", (req, res) => {
    const email = req.body.email;
    if (!email) {
        return res.status(400).json({
            message: "email is required",
        });
    }
    const otp = Math.floor(100000 + Math.random() * 90000).toString();
    otpStore[email] = otp;
    console.log(`otp for ${email} is ${otp}`);
    return res.status(200).json({
        message: "otp generated successfully",
    });
});
app.post("/reset-password", (req, res) => {
    const { email, otp, newPassword } = req.body;
    if (!email || !otp || !newPassword) {
        return res.status(200).json({
            message: "please fill all the required",
        });
    }
    if (otpStore[email] === otp) {
        console.log(`password for ${email} is now set to the ${newPassword}`);
        delete otpStore[email];
        return res.status(200).json({
            message: "password is now set to the new password",
        });
    }
    else {
        return res.status(404).json({
            message: "wrong otp slut ",
        });
    }
});
app.listen(4141, () => {
    console.log("listening to the port 3000");
});
//# sourceMappingURL=index.js.map