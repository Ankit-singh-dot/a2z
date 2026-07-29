// let N = 153;
// let original = N;
// let sum = 0;
// let digits = N.toString().length;
// while (N > 0) {
//   let digit = N % 10;
//   sum += digit ** digits;
//   N = Math.floor(N / 10);
// }
// console.log(sum);
// console.log(N);
// console.log(original);
// if (sum === original) {
//   console.log("Armstrong Number");
// } else {
//   console.log("Not Armstrong Number");
// }

// console.log(a);

// let a = 10;

// console.log(a);

// function outer() {
//   let x = 10;

//    return function () {
//      console.log(x);
//   };
// }

// const fn = outer();

// outer();

// fn();

// const person = {
//   name: "Ankit ",
//   greet() {
//     console.log(this.name);
//   },
// };

// const fn = person.greet.bind(person);
// fn();

// function isPalindrome(str) {
//   str = str.toLowerCase();
//   let reverse = str.split("").reverse().join("");
//   return str === reverse;
// }
// console.log(isPalindrome("kanak"));
// //  armstrong

// let N = 1532;
// let orignal_number = N;
// let digits = N.toString().length;
// let sum = 0;

// while (N > 0) {
//   let digit = N % 10;
//   sum += digit ** digits;
//   N = Math.floor(N / 10);
// }

// if (sum === orignal_number) {
//   console.log("pqfjnwef");
// } else {
//   console.log("this is not ");
// }

// function prime(n) {
//   if (n % 2 == 0 && n > 0) {
//     console.log("this is prime number ");
//   } else {
//     console.log("this is not a prime number");
//   }
// }
// prime(11);

// function reverse(str) {
//   const new_number = str.split("").reverse().join("");
//   if (str == new_number) {
//     console.log("yes correct");
//   } else {
//     console.log("no this not correct");
//   }
// }
// reverse("121");

// function reverse_str(str) {
//   const new_number = str.split("").reverse().join("");
//   console.log(new_number);
// }
// reverse_str("Ankit");

// let sum1 = 0;
// function sum2(n) {
//   while (n > 0) {
//     let new_number = n % 10;
//     sum1 = sum1 + new_number;
//     n = Math.floor(n / 10);
//   }

//   console.log(sum1);
// }
// sum2(123);

// let mul1 = 1;
// function mul2(n) {
//   while (n > 0) {
//     let new_number = n % 10;
//     mul1 = mul1 * new_number;
//     n = Math.floor(n / 10);
//   }

//   console.log(mul1);
// }
// mul2(1234);

// function even(n) {
//   if (n % 2 == 0 && n > 0) {
//     console.log("n is eevn");
//   } else {
//     console.log("n is odd");
//   }
// }
// even(221);

// function larger(n1, n2, n3) {
//   if (n1 > n2) {
//     if (n2 > n3) {
//       console.log("n1 is greater ");
//     }
//   }
// }

// let x = 10;

// function test() {
//   console.log(x);

//   // let x = 20;

//   // console.log(x);
// }

// test();

fetch("url")
  .then((response) => response.json())
  .then((data) => {
    console.log(data);
  })
  .catch((error) => {
    console.log(error);
  });
fetch("https://jsonplaceholder.typicode.com/users")
  .then((response) => response.json())
  .then((data) => {
    console.log(data);
  })
  .catch((error) => {
    console.log(error);
  });
