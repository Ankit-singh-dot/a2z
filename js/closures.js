// function outer() {
//   let count = 0;

//   function inner() {
//     count++;
//     console.log(count);
//   }

//   return inner;
// }

// const call = outer();

// call();
// call();
// call();

// function outer() {
//   let name = "Ankit";

//   function inner() {
//     console.log(name);
//   }

//   return inner;
// }

// const fn = outer();
// fn();

function count() {
  let number = 0;

  function inner() {
    number++;
    console.log(number);
  }
  return inner;
}

let call = count();
call();
call();
call();

// create a user ?

const register = async (req, res) => {
  try {
    const { fullName, emailId, PhoneNumber, Password } = req.body;
    if (!fullName || !emailId || !PhoneNumber || !Password || !role) {
      return res.status(404).json({
        message: "Missing required information",
        success: false,
      });
    }
    const user = await UserActivation.findOne(emailId);
    if (user) {
      return res.status(409).json({
        message: "email already exit ",
        success: false,
      });
    }
    const hashedPassword = await bcrypt.hash(Password, 10);
    const newUser = new User({
      fullName,
      emailId,
      password: hashedPassword,
      role,
      PhoneNumber,
    });
    await newUser.save();
    return res.status(200).json({
      message: "user created successfully ",
      success: true,
    });
  } catch {
    error;
  }
  {
    return res.status(404).send("Error :" + error.message);
  }
};

//  jwt auth banate hai

export const login = async (req, res) => {
  try {
    const { emailId, password, role } = req.body;
    if (!emailId || !password || !role) {
      return res.status(400).json({
        message: "all filed are required",
        success: false,
      });
    }
    let user = await user.findOne({ emailId: emailId });
    if (!user) {
      return res.status(400).json({
        message: "invalid cred",
        success: false,
      });
    }
    const isPasswordValid = await bcrypt.compare(password, hashedPassword);
    if (!isPasswordValid) {
      return res.status(400).json({
        message: "invalid cred",
        success: false,
      });
    }
    if (user.role !== role) {
      return res.status(404).json({
        msg: "invalid Credentials",
      });
    }
    const token = await jwt.sign(
      {
        _id: user._id,
      },
      process.env.JWT_SECRET,
      { expiresIn: "1d" }
    );
    return res.status(200).cookie("token", token).json({
      message: "Logged in successfully",
      success: "true",
      user,
    });
  } catch (error) {}
};

// now jwt things middleware
const userAuth = async (req, res) => {
  try {
    const { token } = req.cookies;
    if (!token) {
      return res.status(401).json({ message: "Token not provided" });
    }
    const decodedObj = await jwt.verify(token, process.env.JWT_SECRET);
    const { _id } = decodedObj;
    const user = await user.findById(_id);
    if (!user) {
      return res.status(404).json({ message: "User not found" });
    }
    req.user = user;
    next();
  } catch (error) {}
};
