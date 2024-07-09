'use strict';

/////////////////////////////////////////////////
/////////////////////////////////////////////////
// BANKIST APP

// Data
const account1 = {
  owner: 'Jonas Schmedtmann',
  movements: [200, 450, -400, 3000, -650, -130, 70, 1300],
  interestRate: 1.2, // %
  pin: 1111,
};

const account2 = {
  owner: 'Jessica Davis',
  movements: [5000, 3400, -150, -790, -3210, -1000, 8500, -30],
  interestRate: 1.5,
  pin: 2222,
};

const account3 = {
  owner: 'Steven Thomas Williams',
  movements: [200, -200, 340, -300, -20, 50, 400, -460],
  interestRate: 0.7,
  pin: 3333,
};

const account4 = {
  owner: 'Sarah Smith',
  movements: [430, 1000, 700, 50, 90],
  interestRate: 1,
  pin: 4444,
};

const accounts = [account1, account2, account3, account4];

// Elements
const labelWelcome = document.querySelector('.welcome');
const labelDate = document.querySelector('.date');
const labelBalance = document.querySelector('.balance__value');
const labelSumIn = document.querySelector('.summary__value--in');
const labelSumOut = document.querySelector('.summary__value--out');
const labelSumInterest = document.querySelector('.summary__value--interest');
const labelTimer = document.querySelector('.timer');

const containerApp = document.querySelector('.app');
const containerMovements = document.querySelector('.movements');

const btnLogin = document.querySelector('.login__btn');
const btnTransfer = document.querySelector('.form__btn--transfer');
const btnLoan = document.querySelector('.form__btn--loan');
const btnClose = document.querySelector('.form__btn--close');
const btnSort = document.querySelector('.btn--sort');

const inputLoginUsername = document.querySelector('.login__input--user');
const inputLoginPin = document.querySelector('.login__input--pin');
const inputTransferTo = document.querySelector('.form__input--to');
const inputTransferAmount = document.querySelector('.form__input--amount');
const inputLoanAmount = document.querySelector('.form__input--loan-amount');
const inputCloseUsername = document.querySelector('.form__input--user');
const inputClosePin = document.querySelector('.form__input--pin');

const displayMovements = function (movement, sort = false) {
  containerMovements.innerHTML = '';
  const movs = sort ? movement.slice().sort((a, b) => a - b) : movement;
  console.log(movs);
  movs.forEach(function (mov, i) {
    const type = mov < 0 ? 'withdrawal' : 'deposit';
    const html = `       
    <div class="movements__row">
      <div class="movements__type movements__type--${type}">
        ${i + 1} ${type}
      </div>
      <div class="movements__value">${mov}</div>
    </div>`;
    containerMovements.insertAdjacentHTML('afterbegin', html);
  });
};
// displayMovements(account1.movements);

const calcAndPrintBalance = function (acc) {
  acc.balance = acc.movements.reduce((acc, mov) => acc + mov, 0);
  labelBalance.textContent = `${acc.balance} €`;
};
// calcAndPrintBalance(account1.movements);
const calcDisplaySummary = function (account) {
  const income = account.movements
    .filter(mov => mov > 0)
    .reduce((acc, mov) => (acc += mov), 0);
  const outcome = account.movements
    .filter(mov => mov < 0)
    .reduce((acc, mov) => (acc += mov), 0);
  const interestGain = account.movements
    .filter(mov => mov > 0)
    .map(deposite => (deposite * account.interestRate) / 100)
    .filter(int => int >= 1)
    .reduce((acc, int) => (acc += int), 0);
  labelSumIn.textContent = `${income} €`;
  labelSumOut.textContent = `${Math.abs(outcome)} €`;
  labelSumInterest.textContent = `${interestGain} €`;
};
// calcDisplaySummary(account1.movements);
const createUsernames = function (accs) {
  accs.forEach(function (acc) {
    acc.username = acc.owner
      .toLowerCase()
      .split(' ')
      .map(name => name[0])
      .join('');
  });
};
createUsernames(accounts);

const updateUI = function (acc) {
  displayMovements(acc.movements);
  calcAndPrintBalance(acc);
  calcDisplaySummary(acc);
};

let currentAccount;

btnLogin.addEventListener('click', function (e) {
  e.preventDefault();
  currentAccount = accounts.find(
    acc => acc.username === inputLoginUsername.value
  );
  if (currentAccount && Number(inputLoginPin.value) === currentAccount.pin) {
    labelWelcome.textContent = `Welcome back, ${
      currentAccount.owner.split(' ')[0]
    }`;
    containerApp.style.opacity = 1;
    inputLoginUsername.value = inputLoginPin.value = '';
    inputLoginPin.blur();
    inputTransferTo.value = inputTransferAmount.value = '';
    inputCloseUsername.value = inputClosePin.value = '';
    inputLoanAmount.value = '';
    updateUI(currentAccount);
  }
  // console.log(currentAccount);
});

btnTransfer.addEventListener('click', function (e) {
  e.preventDefault();
  const receiverAcc = accounts.find(
    acc => acc.username === inputTransferTo.value
  );
  const ammount = Number(inputTransferAmount.value);
  // console.log(receiverAcc, ammount);
  if (
    ammount > 0 &&
    receiverAcc &&
    currentAccount.balance >= ammount &&
    receiverAcc.username !== currentAccount.username
  ) {
    currentAccount.movements.push(-ammount);
    receiverAcc.movements.push(ammount);
  }
  updateUI(currentAccount);
  inputTransferTo.value = inputTransferAmount.value = '';
});

btnLoan.addEventListener('click', function (e) {
  e.preventDefault();
  const ammount = Number(inputLoanAmount.value);
  if (
    ammount > 0 &&
    currentAccount.movements.some(mov => mov >= ammount * 0.1)
  ) {
    currentAccount.movements.push(ammount);
    updateUI(currentAccount);
    inputLoanAmount.value = '';
  }
});

btnClose.addEventListener('click', function (e) {
  e.preventDefault();

  if (
    currentAccount.username === inputCloseUsername.value &&
    currentAccount.pin === Number(inputClosePin.value)
  ) {
    const index = accounts.findIndex(
      acc => acc.username === currentAccount.username
    );
    accounts.splice(index, 1);
    containerApp.style.opacity = 0;
  }
  inputCloseUsername.value = inputClosePin.value = '';
});
let sorted = true;
btnSort.addEventListener('click', function (e) {
  e.preventDefault();
  displayMovements(currentAccount.movements, sorted);
  sorted = !sorted;
});

/////////////////////////////////////////////////
/////////////////////////////////////////////////
// LECTURES

// const currencies = new Map([
//   ['USD', 'United States dollar'],
//   ['EUR', 'Euro'],
//   ['GBP', 'Pound sterling'],
// ]);

const movements = [200, 450, -400, 3000, -650, -130, 70, 1300];

/////////////////////////////////////////////////

// let arr = ['a', 'b', 'c', 'd', 'e'];
// console.log(arr.slice(2));

// const movements = [200, 450, -400, 3000, -650, -130, 70, 1300];
// for (const movement of movements) {
//   movement > 0
//     ? console.log(`You deposited ${movement}`)
//     : console.log(`You withdrew ${Math.abs(movement)}`);
// }

// movements.forEach(function (movement) {
//   movement > 0
//     ? console.log(`You deposited ${movement}`)
//     : console.log(`You withdrew ${Math.abs(movement)}`);
// });

// for (const [i, movement] of movements.entries()) {
//   movement > 0
//     ? console.log(`Movement ${i + 1} You deposited ${movement}`)
//     : console.log(`Movement ${i + 1} You withdrew ${Math.abs(movement)}`);
// }

// movements.forEach(function (movement, i, arr) {
//   movement > 0
//     ? console.log(`Movement ${i + 1} You deposited ${movement}`)
//     : console.log(`Movement ${i + 1} You withdrew ${Math.abs(movement)}`);
// });

// const currencies = new Map([
//   ['USD', 'United States dollar'],
//   ['EUR', 'Euro'],
//   ['GBP', 'Pound sterling'],
// ]);
// currencies.forEach(function (value, key, map) {
//   console.log(`${key}: ${value}`);
// });
// console.log(currencies);
// const currenciesUnique = new Set(['USD', 'GBP', 'EURO', 'USD']);
// console.log(currenciesUnique);
// currenciesUnique.forEach(function (value, _, map) {
//   console.log(`${value}`);
// });

// const checkDogs = function (dogsJulia, dogsKate) {
//   let dogsJuliaCopy = [...dogsJulia];
//   dogsJuliaCopy.splice(0, 1);
//   dogsJuliaCopy.splice(-2, 2);
//   console.log(dogsJuliaCopy);
//   const dogsOfJuliaAndKate = dogsJuliaCopy.concat(dogsKate);
//   const isAdult = function (item, index) {
//     item >= 3
//       ? console.log(
//           `Dog number ${index + 1} is an adult, and is ${item} years old`
//         )
//       : console.log(`Dog number ${index + 1} is still a puppy🐶`);
//   };
//   dogsOfJuliaAndKate.forEach(isAdult);
// };
// const dogsJulia = [3, 5, 2, 12, 7];
// const dogsKate = [4, 1, 15, 8, 3];
// checkDogs(dogsJulia, dogsKate);

// const euroToUsd = 1.1;

// const movementUSD = movements.map(mov => mov * euroToUsd);
// console.log(movements);
// console.log(movementUSD);

// const movementUSDFor = [];
// for (const mov of movements) {
//   movementUSDFor.push(mov * euroToUsd);
// }
// console.log(movementUSDFor);

// const movementDescription = movements.map((mov, i, arr) =>
//   mov > 0
//     ? `Movement ${i + 1}: You deposited ${mov}`
//     : `Movement ${i + 1}:You withdrew ${Math.abs(mov)}`
// );
// console.log(movementDescription);

// const withdrawals = movements.filter(mov => mov < 0);
// console.log(movements);
// console.log(withdrawals);

// const balance = movements.reduce((acc, cur) => (acc += cur), 0);
// console.log(balance);

// Max Value
// const max = movements.reduce(
//   (acc, mov) => (acc > mov ? acc : mov),
//   movements[0]
// );
// console.log(max);

// const calcAverageHumanAge = function (ages) {
//   const humanage = ages.map(age => (age <= 2 ? 2 * age : 16 + age * 4));
//   // console.log(humanage);
//   const adultDog = humanage.filter(function (huAge) {
//     if (18 <= huAge) {
//       return huAge;
//     }
//   });
//   // console.log(adultDog);
//   const averageHumanAge = adultDog.reduce(
//     (acc, dog, i, arr) => (acc += dog / arr.length),
//     0
//   );
//   console.log(averageHumanAge);
// };
// calcAverageHumanAge([5, 2, 4, 1, 15, 8, 3]);
// calcAverageHumanAge([16, 6, 10, 5, 6, 1, 4]);

// const calcAverageHumanAge = function (ages) {
//   const averageHumanAge = ages
//     .map(age => (age <= 2 ? 2 * age : 16 + age * 4))
//     .filter(huAge => 18 <= huAge)
//     .reduce((acc, dog, i, arr) => (acc += dog / arr.length), 0);
//   console.log(averageHumanAge);
// };
// calcAverageHumanAge([5, 2, 4, 1, 15, 8, 3]);
// calcAverageHumanAge([16, 6, 10, 5, 6, 1, 4]);

// const firstWithdrawal = movements.find(mov => mov < 0);
// console.log(firstWithdrawal);
// const account = accounts.find(acc => acc.owner === 'Jessica Davis');
// console.log(account);

// const sumOfAllMovements = accounts
//   .map(acc => acc.movements)
//   .flat()
//   .reduce((acc, mov) => acc + mov, 0);

// const sumOfAllMovements2 = accounts
//   .flatMap(acc => acc.movements)
//   .reduce((acc, mov) => acc + mov, 0);

// account1.movements.sort((a, b) => {
//   if (a > b) {
//     return 1;
//   }
//   if (a < b) {
//     return -1;
//   }
// });

// const owners = ['Jonas', 'Zach', 'Adam', 'Martha'];
// console.log(owners);
// console.log(owners.sort());

// console.log(movements);
// movements.sort((a, b) => {
//   // if (a > b) return 1;
//   // if (b > a) return -1;
//   return a - b;
// });
// console.log(movements);

// const x = new Array(7);
// console.log(x);
// x.fill(1, 3, 5);
// console.log(x);
// let sum = 0;
// const bankDepositeSum = accounts.forEach(function (acc) {
//   sum += acc.movements.reduce((ac, mov) => ac + (mov > 0 ? mov : 0), 0);
// });
// console.log(sum);
// const bankDepositeSum = accounts
//   .flatMap(acc => acc.movements)
//   .filter(mov => mov > 0)
//   .reduce((sum, mov) => sum + mov, 0);
// console.log(bankDepositeSum);

// const countOfDepositeAboveOneThousand = accounts
//   .flatMap(acc => acc.movements)
//   .filter(mov => mov >= 1000).length;
// console.log(countOfDepositeAboveOneThousand);

// const countOfDepositeAboveOneThousand = accounts
//   .flatMap(acc => acc.movements)
//   .reduce((count, cur) => (cur >= 1000 ? count + 1 : count), 0);
// console.log(countOfDepositeAboveOneThousand);

// const bankWithdrawlSum = accounts
//   .flatMap(acc => acc.movements)
//   .filter(mov => mov < 0)
//   .reduce((sum, mov) => sum + Math.abs(mov), 0);
// console.log(bankWithdrawlSum);
// const sums = {
//   deposite: bankDepositeSum,
//   withdrawl: bankWithdrawlSum,
// };
// console.log(sums);

// const { deposite, withdrawl } = accounts
//   .flatMap(acc => acc.movements)
//   .reduce(
//     (sum, cur) => {
//       cur > 0 ? (sum.deposite += cur) : (sum.withdrawl += cur);
//       return sum;
//     },
//     { deposite: 0, withdrawl: 0 }
//   );
// console.log(deposite, withdrawl);
// const convertTitleCase = function (title) {
//   const exceptions = ['is', 'a'];

//   const titleCase = title
//     .toLowerCase()
//     .split(' ')
//     .map(word =>
//       exceptions.includes(word) ? word : word[0].toUpperCase() + word.slice(1)
//     )
//     .join(' ');
//   return titleCase;
// };
// console.log(convertTitleCase('This is a pen'));
// console.log(convertTitleCase('This is a PEN'));

const dogs = [
  { weight: 22, curFood: 250, owners: ['Alice', 'Bob'] },
  { weight: 8, curFood: 200, owners: ['Matilda'] },
  { weight: 13, curFood: 275, owners: ['Sarah', 'John'] },
  { weight: 32, curFood: 340, owners: ['Michael'] },
];

dogs.forEach(dog => {
  dog.recommondedFood = Math.trunc(dog.weight ** 0.75 * 28);
});
console.log(dogs);
const findSarahDog = dogs.find(dog => dog.owners.includes('Sarah'));
console.log(findSarahDog);
const status = function (dog) {
  console.log(dog.recommondedFood, dog.curFood);
  if (dog.recommondedFood > dog.curFood) {
    return 'Eating too little';
  } else if (dog.recommondedFood < dog.curFood) {
    return 'Eating too much';
  } else {
    return 'Eating well';
  }
};
// const dogs = [
//   { weight: 22, curFood: 250, owners: ['Alice', 'Bob'] },
//   { weight: 8, curFood: 200, owners: ['Matilda'] },
//   { weight: 13, curFood: 275, owners: ['Sarah', 'John'] },
//   { weight: 32, curFood: 340, owners: ['Michael'] },
// ];
console.log(status(findSarahDog));
const ownersEatTooMuch = dogs
  .filter(dog => dog.recommondedFood < dog.curFood)
  .flatMap(dog => dog.owners);
console.log(ownersEatTooMuch);
console.log(ownersEatTooMuch.join(' and ') + `'s dogs eat too much!`);
const ownersEatTooLittle = dogs
  .filter(dog => dog.recommondedFood > dog.curFood)
  .flatMap(dog => dog.owners);
console.log(ownersEatTooLittle);
const checkExactAmmountOfFood = dogs.some(
  dog => dog.recommondedFood === dog.curFood
);
console.log(checkExactAmmountOfFood);
const checkOkAmmountOfFood = dogs.some(
  dog =>
    dog.curFood > dog.recommondedFood * 0.9 &&
    dog.curFood < dog.recommondedFood * 1.1
);
console.log(checkOkAmmountOfFood);
const checkOkAmmountOfFoodFunc = dog =>
  dog.curFood > dog.recommondedFood * 0.9 &&
  dog.curFood < dog.recommondedFood * 1.1;
const eatOkAmmountOfFood = dogs.filter(checkOkAmmountOfFoodFunc);
console.log(eatOkAmmountOfFood);
const sortedRecommendedFood = dogs
  .slice()
  .sort((a, b) => a.recommondedFood - b.recommondedFood);
console.log(sortedRecommendedFood);

const array = [2, 7, 19, 23];
const newArray = array.filter(arr => (arr % 2 ? true : false));
console.log(newArray);
const nArray = array
  .reduce((acc, val) => [...acc, val % 2 ? val : null], [])
  .filter(el => el != null);
console.log(nArray);
