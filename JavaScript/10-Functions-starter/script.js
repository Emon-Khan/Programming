'use strict';
// const flight = 'LH234';
// const jonas = {
//   name: 'Jonas Schmetdmann',
//   passport: 2473695158,
// };

// const checkIn = function (flightNum, passenger) {
//   flightNum = 'LH999';
//   passenger.name = 'Mr.' + passenger.name;
// };
// checkIn(flight, jonas);
// console.log(flight);
// console.log(jonas);

// const oneWord = function (str) {
//   return str.replace(/ /g, '').toLowerCase();
// };
// const upperFirstWord = function (str) {
//   const [first, ...others] = str.split(' ');
//   return [first.toUpperCase(), ...others].join(' ');
// };
// const transform = function (str, fn) {
//   console.log(`Original String: ${str}`);
//   console.log(`Transformed String: ${fn(str)}`);
//   console.log(`Transformed by: ${fn.name}`);
// };
// transform('Javascript is developing day by day', upperFirstWord);
// transform('Javascript is developing day by day', oneWord);

// const greet = greeting => name => console.log(`${greeting} ${name}`);
// const greetingMessage = greet('Hey');
// greetingMessage('Emon');
// greetingMessage('Raju');
// greet('Hello')('Hugo');
// greet('Hi')('Nabil');

// const luftansa = {
//   airline: 'Luftansa',
//   iataCode: 'LH',
//   bookings: [],
//   book(flightNum, name) {
//     console.log(
//       `${name} booked a seat on ${this.airline} flight ${this.iataCode}${flightNum}`
//     );
//     this.bookings.push({ flight: `${this.iataCode}${flightNum}`, name });
//   },
// };
// luftansa.book(247, 'Emon');
// console.log(luftansa);

// const euroWings = {
//   airline: 'Eurowings',
//   iataCode: 'EW',
//   bookings: [],
// };
// const book = luftansa.book;
//Does Not Work
// book(56, 'Emon Kabir');

// book.call(euroWings, 56, 'Emon Kabir');
// console.log(euroWings);

//Bind Method
// const bookEW = book.bind(euroWings);
// bookEW(78, 'Tuck Thuck');
// console.log(euroWings);
// const bookEW23 = book.bind(euroWings, 23);
// bookEW23('Jhon');
// bookEW23('Williams');

//EventListener
// luftansa.planes = 121;
// luftansa.buyPlane = function () {
//   console.log(this);
//   this.planes++;
//   console.log(this.planes);
// };
// document
//   .querySelector('.buy')
//   .addEventListener('click', luftansa.buyPlane.bind(luftansa));

// Partial Application
// const addTax = (rate, value) => value + value * rate;
// console.log(addTax(0.1, 200));

// const addVAT = addTax.bind(null, 0.17);
// console.log(addVAT(300));

// const addTax = function (rate) {
//   return function (value) {
//     return value + value * rate;
//   };
// };
// console.log(addTax(0.23)(100));

// Challenge 1
// const poll = {
//   question: 'What is your favourite programming language?',
//   options: ['0: JavaScript', '1: Python', '2: Rust', '3:C++'],
//   answer: new Array(4).fill(0),
//   registerNewAnswer: function () {
//     let input = Number(
//       prompt(
//         `${this.question}\n${this.options.join('\n')}\nWrite option number`
//       )
//     );
//     typeof input === 'number' &&
//       input < this.answer.length &&
//       this.answer[input]++;
//     this.displayResults([5, 2, 3]);
//     this.displayResults('string');
//   },
//   displayResults(type = 'array') {
//     if (type === 'array') {
//       console.log(this.answer);
//     } else if (type === 'string') {
//       console.log(`Poll results are ${this.answer.join(', ')}`);
//     }
//   },
// };
// document
//   .querySelector('.poll')
//   .addEventListener('click', poll.registerNewAnswer.bind(poll));
// const Data1 = [5, 2, 3];
// poll.displayResults.call({ answer: Data1 }, 'string');

//************Closure*************
// const secureBooking = function () {
//   let passengerCount = 0;
//   return function () {
//     passengerCount++;
//     console.log(`${passengerCount} passengers`);
//   };
// };
// const booker = secureBooking();
// booker();
// booker();

//Example 1
// let f;
// const g = function () {
//   const a = 23;
//   f = function () {
//     console.log(a * 2);
//   };
// };

// const h = function () {
//   const b = 777;
//   f = function () {
//     console.log(b * 2);
//   };
// };
// g();
// f();
// // Re-assign
// h();
// f();

//Example 2

// const passengerOnBoard = function (n, wait) {
//   const perGroup = n / 3;
//   setTimeout(function () {
//     console.log(`A total of ${n} passengers are boarding the plane.`);
//     console.log(
//       `There are 3 groups and in each group there are ${perGroup} passengers.`
//     );
//   }, wait);
//   console.log(`Will start boarding in ${wait} seconds.`);
// };
// passengerOnBoard(180, 3);
// console.dir(setTimeout);
//Challenge 2
(function () {
  const header = document.querySelector('h1');
  header.style.color = 'red';
  document.querySelector('body').addEventListener('click', function () {
    if (header.style.color === 'red') {
      header.style.color = 'blue';
    } else if (header.style.color === 'blue') {
      header.style.color = 'red';
    }
  });
})();
console.dir(window);
