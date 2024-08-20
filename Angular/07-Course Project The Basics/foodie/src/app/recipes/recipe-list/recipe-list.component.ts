import { Component, EventEmitter, Output } from '@angular/core';
import { Recipes } from '../recipes.model';

@Component({
  selector: 'app-recipe-list',
  // standalone: true,
  // imports: [],
  templateUrl: './recipe-list.component.html',
  styleUrl: './recipe-list.component.css',
})
export class RecipeListComponent {
  @Output() eachItemWasSelected = new EventEmitter<Recipes>();
  recipes: Recipes[] = [
    new Recipes(
      'A Test Recipe',
      'This is test Recipe',
      'https://images.immediate.co.uk/production/volatile/sites/30/2020/08/chorizo-mozarella-gnocchi-bake-cropped-9ab73a3.jpg?quality=90&webp=true&resize=300,272'
    ),
    new Recipes(
      'A Test Recipe',
      'This is test Recipe',
      'https://images.immediate.co.uk/production/volatile/sites/30/2020/08/chorizo-mozarella-gnocchi-bake-cropped-9ab73a3.jpg?quality=90&webp=true&resize=300,272'
    ),
  ];
  onEachItemSelected(recipe: Recipes) {
    this.eachItemWasSelected.emit(recipe);
  }
}
