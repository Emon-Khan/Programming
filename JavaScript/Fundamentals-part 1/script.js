"use strict";
// let year;
// console.log(year);
// console.log(typeof year);

// Challenge 1

// Data 2
// const massMark = 95;
// const massJohn = 85;
// const heightMark = 1.88;
// const heightJohn = 1.76;

// const BMIMark = massMark / heightMark ** 2;
// console.log(BMIMark);
// const BMIJhon = massJohn / (heightJohn * heightJohn);
// console.log(BMIJhon);

// markHigherBMI = BMIMark > BMIJhon;
// console.log(markHigherBMI);

// Challenge 2

// if (BMIMark > BMIJhon) {
//     console.log(`Mark's BMI is higher than John's!`);
// } else {
//     console.log(`John's BMI is higher than Mark's!`);
// }

// if (BMIMark > BMIJhon) {
//     console.log(`Mark's BMI(${BMIMark}) is higher than John's(${BMIJhon})!`);
// } else {
//     console.log(`John's BMI(${BMIJhon}) is higher than Mark's(${BMIMark})!`);
// }

// Challenge 3

// let scoreDolphin = [96, 108, 89];
// let sumOfScoreForDolphin = 0
// for (let i = 0; i < scoreDolphin.length; i++) {
//     sumOfScoreForDolphin += scoreDolphin[i];
// }
// const averageScoreForDolphin = sumOfScoreForDolphin / scoreDolphin.length;
// console.log(averageScoreForDolphin);

// let scoreKoalas = [88, 91, 110];
// let sumOfScoreForKoalas = 0
// for (let i = 0; i < scoreKoalas.length; i++) {
//     sumOfScoreForKoalas += scoreKoalas[i];
// }
// const averageScoreForKoalas = sumOfScoreForKoalas / scoreKoalas.length;
// console.log(averageScoreForKoalas);

// if (averageScoreForDolphin > averageScoreForKoalas) {
//     console.log("Dolphin");
// } else if (averageScoreForDolphin < averageScoreForKoalas) {
//     console.log("Koalas");
// } else {
//     console.log("Draw");
// }

// Bonus 1
// Bonus 2

// let scoreDolphin = (97 + 112 + 88) / 3;
// console.log(scoreDolphin);

// let scoreKoalas = (109 + 95 + 93) / 3;
// console.log(scoreKoalas);

// if (scoreDolphin > scoreKoalas && scoreDolphin >= 100) {
//     console.log("Dolphin Team Wins");
// } else if (scoreDolphin < scoreKoalas && scoreKoalas >= 100) {
//     console.log("Koalas Team Wins");
// } else if (scoreDolphin === scoreKoalas && scoreKoalas >= 100 && scoreDolphin >= 100) {
//     console.log("Both Team Wins");
// } else {
//     console.log("No team wins");
// }

// Challenge 4

let bill = 430;
const tip = bill >= 50 && bill <= 300 ? bill * 0.15 : bill * 0.2;
console.log(tip);

console.log(
  `The bill was ${bill}, the tip was ${tip}, and the total value ${bill + tip}`
);
