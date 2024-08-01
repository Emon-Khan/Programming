"strict mode";
const budget = Object.freeze([
  { value: 250, description: "Sold old TV 📺", user: "jonas" },
  { value: -45, description: "Groceries 🛒", user: "jonas" },
  { value: 3500, description: "Monthly Salary 👩‍💻", user: "jonas" },
  { value: 300, description: "Freelancing 👨‍💻", user: "jonas" },
  { value: -1100, description: "New iPhone 📱", user: "jonas" },
  { value: -20, description: "Candy 🍭", user: "matilda" },
  { value: -125, description: "Toys 🚗", user: "matilda" },
  { value: -1800, description: "New Laptop 💻", user: "jonas" },
]);

const spendingLimits = Object.freeze({
  jonas: 1500,
  matilda: 100,
});
// spendingLimits.push({ jay: 200 });
// console.log(spendingLimits);

const getLimit = (user, limits) => limits?.[user] ?? 0;

//Pure Function :D
const addExpense = function (
  state,
  limits,
  value,
  description,
  user = "jonas"
) {
  const cleanUser = user.toLowerCase();

  return value <= getLimit(cleanUser, limits)
    ? [...state, { value: -value, description, user }]
    : state;
};
const newBudget1 = addExpense(budget, spendingLimits, 10, "Pizza 🍕");
const newBudget2 = addExpense(
  newBudget1,
  spendingLimits,
  100,
  "Going to movies 🍿",
  "Matilda"
);
const newBudget3 = addExpense(newBudget2, spendingLimits, 200, "stuff", "Jay");

// const checkExpenses = function (state, limits) {
//   return state.map((entry) => {
//     return entry.value < -getLimit(entry.user, limits)
//       ? { ...entry, flag: "limit" }
//       : entry;
//   });
// };

const checkExpenses = (state, limits) =>
  state.map((entry) =>
    entry.value < -getLimit(entry.user, limits)
      ? { ...entry, flag: "limit" }
      : entry
  );
const finalBudget = checkExpenses(newBudget3, spendingLimits);
console.log(finalBudget);

const logBigExpenses = function (bigLimit, state) {
  const bigExpense = state
    .filter((entry) => entry.value <= -bigLimit)
    .map((entry) => entry.description.slice(-2))
    .join(" / ");
  // .reduce((str, cur) => `${str} / ${cur.description.slice(-2)}`, "");

  console.log(bigExpense);
  // let output = "";
  // for (const el of state)
  //   output += el.value <= -bigLimit ? `${el.description.slice(-2)} / ` : ""; // Emojis are 2 character

  // output = output.slice(0, -2); // Remove last '/ '
  // console.log(output);
};
logBigExpenses(100, finalBudget);
