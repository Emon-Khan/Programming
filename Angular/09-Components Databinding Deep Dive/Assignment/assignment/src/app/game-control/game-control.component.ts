import { Component, EventEmitter, Output } from '@angular/core';

@Component({
  selector: 'app-game-control',
  templateUrl: './game-control.component.html',
  styleUrl: './game-control.component.css',
})
export class GameControlComponent {
  @Output() startGame = new EventEmitter<number>();
  interval: any;
  value = 0;
  // @Output() endGame = new EventEmitter<{ second: number }>();
  onStartGame() {
    this.interval = setInterval(() => {
      this.startGame.emit((this.value += 1));
    }, 1000);
  }
  onPauseGame() {
    clearInterval(this.interval);
  }
}
