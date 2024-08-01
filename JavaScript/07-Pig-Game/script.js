'use strict';

//Selecting Elements
const score0Element = document.querySelector('#score--0');
const score1Element = document.querySelector('#score--1');
const diceElement = document.querySelector('.dice');
const rollDiceElement = document.querySelector('.btn--roll');
const holdElement = document.querySelector('.btn--hold');
const player0Element = document.querySelector('.player--0');
const player1Element = document.querySelector('.player--1');
const current0Element = document.querySelector('#current--0');
const current1Element = document.querySelector('#current--1');
const newGameElement = document.querySelector('.btn--new');

let scores, sum, activePlayer, playing;
//Starting Conditions
const init = function () {
  score0Element.textContent = 0;
  score1Element.textContent = 0;
  current0Element.textContent = 0;
  current1Element.textContent = 0;

  scores = [0, 0];
  sum = 0;
  activePlayer = 0;
  playing = true;

  diceElement.classList.add('hidden');
  player0Element.classList.add('player--active');
  player1Element.classList.remove('player--active');
  player0Element.classList.remove('player--winner');
  player1Element.classList.remove('player--winner');
};
init();

const switchPlayer = function () {
  document.querySelector(`#current--${activePlayer}`).textContent = 0;
  sum = 0;
  activePlayer = activePlayer === 0 ? 1 : 0;
  player0Element.classList.toggle('player--active');
  player1Element.classList.toggle('player--active');
};

//Click On Roll Dice
rollDiceElement.addEventListener('click', function () {
  if (playing) {
    //Generate Random Number
    let randomNumber = Math.trunc(Math.random() * 6) + 1;

    if (diceElement.classList.contains('hidden'))
      diceElement.classList.remove('hidden');

    //Set Dice Image
    diceElement.src = `dice-${randomNumber}.png`;
    if (randomNumber !== 1) {
      sum += randomNumber;
      document.querySelector(`#current--${activePlayer}`).textContent = sum;
    } else {
      switchPlayer();
    }
  }

  //   if (player0Element.classList.contains('player--active')) {
  //     current0Element.textContent = sum;
  //   } else {
  //     current1Element.textContent = sum;
  //   }
  //   if (randomNumber === 1) {
  //     sum = 0;
  //     if (player0Element.classList.contains('player--active')) {
  //       current0Element.textContent = sum;
  //       player1Element.classList.add('player--active');
  //       player0Element.classList.remove('player--active');
  //     } else {
  //       current1Element.textContent = sum;
  //       player0Element.classList.add('player--active');
  //       player1Element.classList.remove('player--active');
  //     }
  //   }
});

holdElement.addEventListener('click', function () {
  if (playing) {
    scores[activePlayer] += sum;
    document.querySelector(`#score--${activePlayer}`).textContent =
      scores[activePlayer];
    if (scores[activePlayer] >= 100) {
      playing = false;
      document
        .querySelector(`.player--${activePlayer}`)
        .classList.add('player--winner');
      document
        .querySelector(`.player--${activePlayer}`)
        .classList.remove('player--active');
    }
    switchPlayer();
    //   if (player0Element.classList.contains('player--active')) {
    //     score0 += Number(current0Element.textContent);
    //     score0Element.textContent = score0;
    //     sum = 0;
    //     current0Element.textContent = sum;
    //   } else {
    //     score1 += Number(current1Element.textContent);
    //     score1Element.textContent = score1;
    //     sum = 0;
    //     current1Element.textContent = sum;
    //   }
  }
});
// if (Number(score0Element.textContent) >= 100) {
//   resetGame();
//   console.log('Player 1 win the game');
// } else {
//   resetGame();
//   console.log('Player 2 win the game');
// }

// newGameElement.addEventListener('click', resetGame);

newGameElement.addEventListener('click', init);
