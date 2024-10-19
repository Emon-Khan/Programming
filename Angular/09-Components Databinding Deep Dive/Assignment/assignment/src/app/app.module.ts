import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { GameControlComponent } from './game-control/game-control.component';
import { OddComponent } from './odd/odd.component';
import { EvenComponent } from './even/even.component';
import { AppComponent } from './app.component';

@NgModule({
  declarations: [
    AppComponent,
    GameControlComponent,
    OddComponent,
    EvenComponent,
  ],
  imports: [BrowserModule, CommonModule],
  providers: [],
  bootstrap: [AppComponent],
})
export class AppModule {}
