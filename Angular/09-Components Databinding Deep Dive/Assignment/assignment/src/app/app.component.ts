import { Component } from '@angular/core';
import { RouterOutlet } from '@angular/router';

@Component({
  selector: 'app-root',
  // standalone: true,
  // imports: [RouterOutlet],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css',
})
export class AppComponent {
  even: number[] = [];
  odd: number[] = [];
  title = 'assignment';
  onStartGameFired(second: number) {
    second % 2 == 0 ? this.even.push(second) : this.odd.push(second);
  }
  onPauseGameFired() {}
}
