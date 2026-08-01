import express from "express";

const app = express();
app.get("/:id", async (req, res) => {
  try {
    const userId = req.params.id;
    const response = await fetch(`https://fakestoreapi.com/products/${userId}`);
    if (!response.ok) {
      return res.status(response.status).json({
        message: "product not found ",
      });
    }
    const data = await response.json();
    res.json(data);
  } catch (error) {
    res.status(500).json({
      message: "something went wrong ",
      error: error.message,
    });
  }
});
app.listen(3000, () => {
  console.log("listening to the port 3000");
});
