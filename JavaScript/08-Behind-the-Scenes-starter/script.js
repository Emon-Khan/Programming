'use strict';

// console.log(this);
// const calcAge = function (birthYear) {
//   console.log(2024 - birthYear);
//   console.log(this);
// };
// calcAge(1997);

// const calcAgeArrow = birthYear => {
//   console.log(2024 - birthYear);
//   console.log(this);
// };
// calcAgeArrow(1997);

// const jonas = {
//   year: 1997,
//   calcAge: function () {
//     return 2024 - this.year;
//   },
// };
// console.log(jonas.calcAge());

let age = 30;
let oldage = age;
age = 31;
console.log(age);
console.log(oldage);

const me = {
  name: 'Emon',
  age: 27,
};
const friend = me;
friend.age = 30;

console.log('Me', me);
console.log('Friend', friend);

const newFriend = Object.assign({}, me);
newFriend.age = 35;
console.log('Me', me);
console.log('Friend', newFriend);
