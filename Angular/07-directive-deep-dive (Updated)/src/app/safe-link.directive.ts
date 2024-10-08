import { Directive, input, OnInit } from '@angular/core';

@Directive({
  selector: 'a[appSafeLink]',
  standalone: true,
  host: {
    '(click)': 'onConfirmLeavePage($event)',
  },
})
export class SafeLinkDirective implements OnInit {
  queryParam = input<string>('myapp', { alias: 'appSafeLink' });
  constructor() {
    console.log('Safe Link directive is active!!!');
  }
  ngOnInit() {}
  onConfirmLeavePage(event: MouseEvent) {
    const wantsToLeave = window.confirm('Do you want to leave the app?');
    if (wantsToLeave) {
      const address = (event.target as HTMLAnchorElement).href;
      (event.target as HTMLAnchorElement).href =
        address + '?from=' + this.queryParam();
      return;
    }
    event.preventDefault();
  }
}
