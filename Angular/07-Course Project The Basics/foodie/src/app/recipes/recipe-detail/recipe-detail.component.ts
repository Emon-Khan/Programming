import { Component, Input } from '@angular/core';
import { Recipes } from '../recipes.model';
import { DropdownDirective } from '../../shared/dropdown.directive';

@Component({
  selector: 'app-recipe-detail',
  // standalone: true,
  // imports: [],
  templateUrl: './recipe-detail.component.html',
  styleUrl: './recipe-detail.component.css',
})
export class RecipeDetailComponent {
  @Input() recipe!: Recipes;
}
