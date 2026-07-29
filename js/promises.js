function placeOrder(food) {
  return new Promise((resolve, reject) => {
    console.log("Placing your order...");
    setTimeout(() => {
      const restaurantOpen = true;
      if (restaurantOpen) {
        resolve({
          orderId: 101,
          food,
        });
      } else {
        reject("restaurant is closed ");
      }
    }, 2000);
  });
}
function prepareOrder(order) {
  return new Promise((resolve, reject) => {
    console.log("Chef is preparing your order...");

    setTimeout(() => {
      resolve({
        ...order,
        status: "Prepared",
      });
    }, 3000);
    reject;
  });
}
console.log(prepareOrder);

function assignDelivery(order) {
  return new Promise((resolve, reject) => {
    console.log("Finding a delivery partner...");

    setTimeout(() => {
      const riderAvailable = true;

      if (riderAvailable) {
        resolve({
          ...order,
          rider: "Rahul",
        });
      } else {
        reject("No delivery partner available.");
      }
    }, 1500);
  });
}

function deliverOrder(order) {
  return new Promise((resolve) => {
    console.log("Delivery partner is on the way...");

    setTimeout(() => {
      resolve({
        ...order,
        delivered: true,
      });
    }, 4000);
  });
}

// placeOrder("Cheese Pizza")
//   .then((order) => prepareOrder(order))
//   .then((preparedOrder) => assignDelivery(preparedOrder))
//   .then((deliveryOrder) => deliverOrder(deliveryOrder))
//   .then((finalOrder) => {
//     console.log("Order Delivered Successfully!");
//     console.log(finalOrder);
//   })
//   .catch((err) => {
//     console.log(err);
//   });

async function orderPizza() {
  try {
    const order = await placeOrder("Cheese Pizza");

    const preparedOrder = await prepareOrder(order);

    const deliveryOrder = await assignDelivery(preparedOrder);

    const finalOrder = await deliverOrder(deliveryOrder);

    console.log(" Order Delivered Successfully!");
    console.log(finalOrder);
  } catch (err) {
    console.log(err);
  }
}

orderPizza();

console.log(this);
