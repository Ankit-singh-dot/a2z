"use strict";
// console.log(this);
// function x() {
//   console.log(this);
// }
// x();

const obj = {
  a: 10,
  x: function () {
    console.log(this);
  },
};
obj.x();

const obj2 = {
  a: 20,
  x: function () {
    const y = () => {
      console.log(this);
    };
    y();
  },
};
obj2.x();


// const person = {
//   name: "ANkti ",
// };
// function greet(city) {
//   console.log(`hello ${this.name} welcome to ${city}`);
// }
// greet.call(person, "delhi");
