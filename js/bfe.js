// function join(a, b, c) {
//   return `${a}_${b}_${c}`;
// }
// function curry(fn) {
//   return function curried(...args) {
//     if (args.length >= fn.length) {
//       return fn.call(this, ...args);
//     }
//     return function (...nextArgs) {
//       return curried.apply(this, [...args, ...nextArgs]);
//     };
//   };
// }
// const curriedJoin = curry(join);
// console.log(curriedJoin(1, 2, 3)); // '1_2_3'
// console.log(curriedJoin(1)(2, 3)); // '1_2_3'
// console.log(curriedJoin(1, 2)(3)); // '1_2_3'

// function sum(a) {
//   return function (b) {
//     return function (c) {
//       return a + b + c;
//     };
//   };
// }
// console.log(sum(1)(2)(3));

// function sum(first) {
//   let total = first || 0;

//   function inner(next) {
//     if (next === undefined) {
//       return total;
//     }

//     total += next;
//     return inner;
//   }

//   return inner;
// }
// console.log(sum(1)(2)(3)()); // 6
// console.log(sum(10)(20)()); // 30
// console.log(sum(5)()); // 5
// console.log(sum()); // 0

// function multi(first) {
//   let total = first || 1;
//   function inner(next) {
//     if (next === undefined) {
//       return total;
//     }
//     total *= next;
//     return inner;
//   }
//   return inner;
// }

// console.log(multi(1)(2)(3)()); // 6
// console.log(multi(10)(20)()); // 30
// console.log(multi(5)()); // 5
// console.log(multi()); //

// function greet(name) {
//   console.log("Hello", name);
// }

// function once(fn) {
//   let called = false;
//   return function (...args) {
//     console.log(args);
//     if (!called) {
//       called = true;
//       return fn.apply(this, args);
//     }
//   };
// }

// const greetOnce = once(greet);

// greetOnce("Ankit"); // Hello Ankit
// greetOnce("Rahul"); // Nothing
// greetOnce("Aman"); // Nothing

function square(n) {
  console.log("Calculating...");
  return n * n;
}

// function memoize(fn) {
//   const cache = {};
//   return function (...args) {
//     const key = args[0];
//     console.log(args);
//     if (cache[key] !== undefined) {
//       return cache[key];
//     }
//     const result = fn.apply(this, args);
//     console.log(`${result} hai yhe `);
//     cache[key] = result;
//     return result;
//   };
// }

// const memoizedSquare = memoize(square);

// console.log(memoizedSquare(5));
// console.log(memoizedSquare(5));
// console.log(memoizedSquare(10));
// console.log(memoizedSquare(10));




const join = (a, b, c) => {
  return `${a}_${b}_${c}`;
};

function curry(fn) {
  return function curried(...args){
    if(args.includes(_) >= fn.length){
      return fn.call(this , ...args);
    }
    return function (...nextArgs){
      return curried.bind(this , [ ...nextArgs , ...args])
    }
  }
}

curry.placeholder = Symbol();

const curriedJoin = curry(join)
const _ = curry.placeholder
curriedJoin(1, 2, 3) // '1_2_3'
curriedJoin(_, 2)(1, 3) // '1_2_3'
curriedJoin(_, _, _)(1)(_, 3)(2) // '1_2_3'