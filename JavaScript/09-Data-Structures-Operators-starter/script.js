'use strict';

// Data needed for a later exercise
// const flights =
//   '_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30';

// // Data needed for first part of the section
// const restaurant = {
//   name: 'Classico Italiano',
//   location: 'Via Angelo Tavanti 23, Firenze, Italy',
//   categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
//   starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
//   mainMenu: ['Pizza', 'Pasta', 'Risotto'],
//   order: function (starterIndex, mainIndex) {
//     return [this.categories[starterIndex], this.categories[mainIndex]];
//   },

//   openingHours: {
//     thu: {
//       open: 12,
//       close: 22,
//     },
//     fri: {
//       open: 11,
//       close: 23,
//     },
//     sat: {
//       open: 0, // Open 24 hours
//       close: 24,
//     },
//   },
//   orderDelivery: function ({ time, address }) {
//     console.log(time, address);
//   },
// };
// const arr = [2, 3, 4];
// const a = arr[0];
// const b = arr[1];
// const c = arr[2];
// console.log(a, b, c);

// const [x, y, z] = arr;
// console.log(x, y, z);

// let [main, , secondary] = restaurant.categories;
// console.log(main, secondary);

// [main, secondary] = [secondary, main];
// console.log(main, secondary);

// console.log(restaurant.order(2, 1));
// const [first, second] = restaurant.order(2, 1);
// console.log(first, second);

// const { name, categories, openingHours } = restaurant;
// console.log(name, categories, openingHours);
// const {
//   name: restaurantName,
//   categories: foodCategories,
//   openingHours: openAndcloseTime,
// } = restaurant;

// console.log(restaurantName, foodCategories, openAndcloseTime);
// restaurant.orderDelivery({
//   time: '10:30',
//   address: '1137, Khaner Mor, East Monipur, Mirpur-2',
// });

const arr = [7, 8, 9];
const badNewArr = [1, 2, 3, arr[0], arr[1], arr[2]];
console.log(badNewArr);
const newArr = [1, 2, 3, ...arr];
console.log(newArr);
const str = 'Jonas';
const letters = ['Mr.', ...str];
console.log(letters);
