'use strict';

// const Person = function (firstName, birthYear) {
//   this.firstName = firstName;
//   this.birthYear = birthYear;
// };
// const jonas = new Person('Jonas', 1991);
// console.log(jonas);

// // Prototypes
// console.log(Person.prototype);
// Person.prototype.clacAge = function () {
//   console.log(2037 - this.birthYear);
// };
// jonas.clacAge();
// Person.prototype.species = 'Homo Sepian';

// console.log(jonas.__proto__);
// console.log(jonas.__proto__.__proto__.__proto__);

// const arr = [3, 6, 4, 5, 6, 9, 3];
// console.log(arr.__proto__);

// Array.prototype.unique = function () {
//   return [...new Set(this)];
// };
// console.log(arr.unique());

// Challenge1
// const Car = function (make, speed) {
//   this.make = make;
//   this.speed = speed;
// };
// Car.prototype.accelerate = function () {
//   this.speed += 10;
// };
// Car.prototype.break = function () {
//   this.speed -= 5;
// };
// const BMW = new Car('BMW', 120);
// console.log(BMW);
// BMW.accelerate();
// console.log(BMW);
// BMW.break();
// console.log(BMW);

// class  expression
// const PersonCl = class{}

// class declaration
class PersonCl {
  constructor(fullName, birthYear) {
    this.fullName = fullName;
    this.birthYear = birthYear;
  }
  calcAge() {
    console.log(2030 - this.birthYear);
  }
  get age() {
    return 2023 - this.birthYear;
  }
  set fullName(name) {
    if (name.includes(' ')) this._fullName = name;
    else alert(`${name} is not a full name!`);
  }
  get fullName() {
    return this._fullName;
  }
}

const Raju = new PersonCl('Raju Das', 1997);
Raju.calcAge();
console.log(Raju);
console.log('Using Getter Method ' + Raju.age);

// const account = {
//   owner: 'jonas',
//   movements: [200, 530, 120, 300],
//   get latest() {
//     return this.movements.slice(-1).pop();
//   },
//   set latest(mov) {
//     this.movements.push(mov);
//   },
// };

// console.log(account.latest);
// account.latest = 50;
// console.log(account);

// const PersonProto = {
//   calcAge() {
//     console.log(2037 - this.birthYear);
//   },
//   init(name, birthYear) {
//     this.name = name;
//     this.birthYear = birthYear;
//   },
// };
// const steven = Object.create(PersonProto);
// console.log(steven);
// steven.name = 'Steven';
// steven.birthYear = 1997;
// steven.calcAge();
// const sarah = Object.create(PersonProto);
// sarah.init('Sarah', 1979);
// sarah.calcAge();
// console.log(sarah);

// Challenge2
// class CarCl {
//   constructor(make, speed) {
//     this.make = make;
//     this.speed = speed;
//   }
//   get speedUS() {
//     return this.speed / 1.6;
//   }
//   set speedUS(speed) {
//     speed = speed / 1.6;
//     this.speed = speed * 1.6;
//   }
//   accelerate() {
//     return (this.speed += 10);
//   }
//   brake() {
//     return (this.speed -= 5);
//   }
// }

// const Ford = new CarCl('Ford', 120);
// console.log(Ford);
// console.log(Ford.speedUS);

// const Person = function (firstName, birthYear) {
//   this.firstName = firstName;
//   this.birthYear = birthYear;
// };
// Person.prototype.calcAge = function () {
//   return 2037 - this.birthYear;
// };

// const Student = function (firstName, birthYear, course) {
//   Person.call(this, firstName, birthYear);
//   // this.firstName = firstName;
//   // this.birthYear = birthYear;
//   this.course = course;
// };

// Student.prototype = Object.create(Person.prototype);

// Student.prototype.introduce = function () {
//   console.log(`My name is ${this.firstName} and I study ${this.course}`);
// };
// const mike = new Student('Mike Tyson', 1975, 'Computer Science');
// console.log(mike);
// mike.introduce();
// console.log(mike.calcAge());
// Student.prototype.constructor = Student;
// console.log(mike.__proto__);
// console.log(mike.__proto__.__proto__);
// console.log(mike.__proto__.__proto__.__proto__);

// Challenge3
// const Car = function (make, speed) {
//   this.make = make;
//   this.speed = speed;
// };
// Car.prototype.accelerate = function () {
//   this.speed += 10;
// };
// Car.prototype.brake = function () {
//   this.speed -= 5;
// };
// const BMW = new Car('BMW', 120);
// console.log(BMW);
// BMW.accelerate();
// console.log(BMW);
// BMW.brake();
// console.log(BMW);

// const EV = function (make, speed, charge) {
//   Car.call(this, make, speed);
//   this.charge = charge;
// };
// EV.prototype = Object.create(Car.prototype);
// // EV.prototype.constructor = EV;
// EV.prototype.chargeBattery = function (chargeTo) {
//   this.charge = chargeTo;
// };
// EV.prototype.accelerate = function () {
//   this.speed += 20;
//   this.charge -= 1;
//   console.log(`${this.make} going at ${this.speed}
// km/h, with a charge of ${this.charge}%`);
// };
// const Tesla = new EV('Tesla', 120, 23);
// Tesla.chargeBattery(90);
// Tesla.accelerate();
// Tesla.brake();
// console.log(Tesla);

class StudentCl extends PersonCl {
  constructor(fullName, birthYear, course) {
    super(fullName, birthYear);
    this.course = course;
  }
  calcAge() {
    console.log('Inherited');
  }
}
const nabil = new StudentCl('Asfack Nabil', 1998, 'CSE');
console.log(nabil);
nabil.calcAge();
