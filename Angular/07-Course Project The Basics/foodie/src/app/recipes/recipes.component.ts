import { Component } from '@angular/core';
import { Recipes } from './recipes.model';

@Component({
  selector: 'app-recipes',
  // standalone: true,
  // imports: [],
  templateUrl: './recipes.component.html',
  styleUrl: './recipes.component.css',
})
export class RecipesComponent {
  eachRecipeItem!: Recipes;
}
