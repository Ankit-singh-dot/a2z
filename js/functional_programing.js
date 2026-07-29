// const radius = [2, 3, 4, 5];
// const area = function (radius) {
//   return Math.PI * radius * radius;
// };
// const Circum = function (radius) {
//   return 2 * Math.PI * radius;
// };
// const calculate = function (radius, logic) {
//   const output = [];
//   for (let i = 0; i < radius.length; i++) {
//     output.push(logic(radius[i]));
//   }
//   return output;
// };

// console.log(calculate(radius, area));
// console.log(radius.map(area));

//  map
const arr = [1, 2, 3, 4, 5];

const double = arr.map((x) => {
  return x * 2;
});
console.log(double);

//  filter
const arr1 = [2, 3, 4, 5, 7];
const result = arr1.filter((x) => {
  return x % 2 === 0;
});

console.log(result);

//  reduce

const nums = [5, 10, 15, 20];
const result3 = nums.reduce((acc, curr) => {
  return acc + curr;
});
console.log(result3);
const nums1 = [10, 45, 3, 99, 27];
const result4 = nums1.reduce((acc, curr) => {
  return Math.max(acc, curr);
});
console.log(result4);
const fruits = ["apple", "banana", "apple", "orange", "banana", "apple"];
const result5 = fruits.reduce((acc, curr) => {
  acc[curr] = (acc[curr] || 0) + 1;
  return acc;
}, {});
console.log(result5);

const people = [
  { name: "Ankit", age: 20 },
  { name: "Rahul", age: 21 },
  { name: "Priya", age: 20 },
  { name: "Aman", age: 21 },
  { name: "Neha", age: 22 },
];
const result31 = people.reduce((acc, curr) => {
  if (!acc[curr.age]) {
    acc[curr.age] = [];
  }
  acc[curr.age].push(people);
  return acc;
}, {});
console.log(result31);
const result21 = {};
for (const person of people) {
  if (!result21[person.age]) {
    result21[person.age] = [];
  }
  result21[person.age].push(person);
}
console.log(result21);
//

const arr41 = [
  [1, 2],
  [3, 4],
  [5, 6],
];
const result41 = {};
const arr51 = [];
for (const number of arr41) {
  for (items of number) {
    arr51.push(items);
  }
}
console.log(arr51);
const result52 = arr41.reduce((acc, curr) => {
  return acc.concat(curr);
}, []);
console.log(result52);
