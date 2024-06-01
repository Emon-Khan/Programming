"use strict";
// const cutFruitPieces = function (fruit) {
//     return fruit * 4;
// }
// function fruitProcessor(apples, oranges) {
//     const applePieces = cutFruitPieces(apples);
//     const orangePieces = cutFruitPieces(oranges);
//     const juice = `This juice is made from ${applePieces} apple pieces and ${orangePieces} orange pieces`;
//     return juice;
// }
// const juiceDefinition = fruitProcessor(5, 10);
// console.log(juiceDefinition);

// const age = birthYear => 2080 - birthYear;
// console.log(age(2056));

// Challenge 1

// const calcAverage = (scoreFirstLap, scoreSecondLap, scoreThirdLap) => (scoreFirstLap + scoreSecondLap + scoreThirdLap) / 3;
// console.log(calcAverage(44, 23, 71));
// console.log(calcAverage(65, 54, 49));
// const checkWinner = function (avgDolhins, avgKoalas) {
//     if (avgKoalas >= 2 * avgDolhins) {
//         console.log(`Koalas win (${avgKoalas} vs. ${avgDolhins})`);
//     } else if (avgDolhins >= 2 * avgKoalas) {
//         console.log(`Dolhins win (${avgDolhins} vs. ${avgKoalas})`);
//     } else {
//         console.log(`No teams win`);
//     }
// }
// checkWinner(calcAverage(44, 23, 71), calcAverage(65, 54, 49));
// checkWinner(calcAverage(85, 54, 41), calcAverage(23, 34, 27));

// Challenge 2

// const bill = [125, 555, 44];
// const tips = [];
// const total = [];
// const calcTip = function (bill) {
//     return bill >= 50 && bill <= 300 ? bill * 0.15 : bill * 0.20
// }
// // const tip = bill >= 50 && bill <= 300 ? bill * 0.15 : bill * 0.20
// for (let i = 0; i < bill.length; i++) {
//     tips.push(calcTip(bill[i]));
//     total.push(bill[i] + tips[i]);
// }
// console.log(tips);
// console.log(total);

// console.log(`The bill was ${bill}, the tip was ${tips}, and the total value ${bill + tips}`);

// Challenge 3

// const mark = {
//     fullName: "Mark Miller",
//     mass: 78,
//     height: 1.69,
//     calcBMI: function () {
//         this.BMI = this.mass / this.height ** 2;
//         return this.BMI;
//     }
// }

// const john = {
//     fullName: "John Smith",
//     mass: 92,
//     height: 1.95,
//     calcBMI: function () {
//         this.BMI = this.mass / this.height ** 2;
//         return this.BMI;
//     }
// }
// console.log(mark.calcBMI(), john.calcBMI());

// mark.calcBMI() > john.calcBMI() ? console.log(`Mark's BMI (${mark.calcBMI()}) is higher than John's (${john.calcBMI()}))!`) : console.log(`John's BMI (${john.calcBMI()}) is higher than Mark's (${mark.calcBMI()}))!`);

// Challenge 4

let bills = [22, 295, 176, 440, 37, 105, 10, 1100, 86, 52];
const tips = [];
const totals = [];
for (let i = 0; i < bills.length; i++) {
  tips[i] =
    bills[i] >= 50 && bills[i] <= 300 ? bills[i] * 0.15 : bills[i] * 0.2;
  totals[i] = bills[i] + tips[i];
}
console.log(bills, tips, totals);

// console.log(`The bill was ${bill}, the tip was ${tip}, and the total value ${bill + tip}`);

const calcAverage = function (arr) {
  let sum = 0;
  for (let i = 0; i < arr.length; i++) {
    sum += arr[i];
  }

  return sum / arr.length;
};
console.log(calcAverage([5, 9, 1]));

console.log();
