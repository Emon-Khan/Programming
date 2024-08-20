import { Component, EventEmitter, Output } from '@angular/core';
import { Ingredient } from '../../shared/ingredient.model';

@Component({
  selector: 'app-shopping-edit',
  // standalone: true,
  // imports: [],
  templateUrl: './shopping-edit.component.html',
  styleUrl: './shopping-edit.component.css',
})
export class ShoppingEditComponent {
  @Output() shoppingListAdded = new EventEmitter<Ingredient>();
  onAdd(name: string, ammount: number) {
    this.shoppingListAdded.emit({ name, ammount });
  }
}
