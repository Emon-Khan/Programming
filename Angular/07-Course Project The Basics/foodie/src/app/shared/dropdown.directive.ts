import {
  Directive,
  ElementRef,
  HostBinding,
  HostListener,
  Input,
  OnInit,
  Renderer2,
} from '@angular/core';

@Directive({
  selector: '[appDropdown]',
})
export class DropdownDirective implements OnInit {
  @Input('appDropdown') className: string = '';
  @HostBinding('class') elementClass!: string;
  isOpen = false;
  constructor(private elRef: ElementRef) {}
  //   private renderer: Renderer2
  ngOnInit() {}
  @HostListener('click') toggleOpen() {
    this.isOpen = !this.isOpen;
    this.elementClass = this.isOpen ? this.className : '';
    // eventData: Event
    // this.renderer.addClass(this.elRef.nativeElement, this.className);
  }
}
