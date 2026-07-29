function fun(str) {
  let index = 0;
  return {
    next() {
      if (index < str.length) {
        return str[index++];
      }
      return undefined;
    },
  };
}

const str1 = fun("javascript");
const str2 = fun("reactjs");

console.log(str1.next()); // 'j'
console.log(str1.next()); // 'a'
console.log(str1.next()); // 'v'

console.log(str2.next()); // 'r'
console.log(str2.next()); // 'e'
