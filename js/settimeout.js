// function x() {
//   var i = 1;
//   setTimeout(() => {
//     console.log(i);
//   }, 2000);
//   console.log("hello js ")
// }

// x();

//

// function x() {
//     // sirf let ke jagah var kr do pura output change ho jayega
//   for (let i = 1; i <= 5; i++) {
//     setTimeout(() => {
//       console.log(i);
//     }, i * 1000);
//   }
// }
// x();

// function x() {
//   for (var i = 1; i <= 5; i++) {
//     function close(x) {

//         setTimeout(() => {
//           console.log(x);
//         }, x * 1000);

//     }
//     close(i);
//   }
// }
// x();

document.getElementById("clickme").addEventListener("click", function xyz() {
  console.log("button clicked");
});
