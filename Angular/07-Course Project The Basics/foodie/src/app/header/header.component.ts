import { Component, EventEmitter, Output } from '@angular/core';

@Component({
  selector: 'app-header',
  templateUrl: './header.component.html',
})
export class HeaderComponent {
  @Output() typeSelect = new EventEmitter<string>();
  onSelect(type: string) {
    this.typeSelect.emit(type);
  }
}
