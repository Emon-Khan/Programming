import { Component, EventEmitter, Input, Output } from '@angular/core';
import { Recipes } from '../../recipes.model';

@Component({
  selector: 'app-recipe-item',
  // standalone: true,
  // imports: [],
  templateUrl: './recipe-item.component.html',
  styleUrl: './recipe-item.component.css',
})
export class RecipeItemComponent {
  @Input() recipe!: Recipes;
  @Output() eachItem = new EventEmitter<void>();
  onSelectEachItem() {
    this.eachItem.emit();
  }
}
