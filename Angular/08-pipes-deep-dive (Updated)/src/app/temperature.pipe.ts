import { output, Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'temp',
  standalone: true,
})
export class TemperaturePipe implements PipeTransform {
  transform(value: any, inputType: 'cel' | 'fah', outputType?: 'cel' | 'fah') {
    let val: number;
    if (value === 'string') {
      val = parseFloat(value);
    } else {
      val = value;
    }
    let outputTemp: number;
    if (inputType === 'cel' && outputType === 'fah') {
      outputTemp = val * (9 / 5) + 32;
    } else if (inputType === 'fah' && outputType === 'cel') {
      outputTemp = (val - 32) * (5 / 9);
    } else {
      outputTemp = val;
    }
    let symbol: '°C' | '°F';
    if (!outputType) {
      symbol = inputType === 'cel' ? '°C' : '°F';
    } else {
      symbol = outputType === 'cel' ? '°C' : '°F';
    }
    return `${outputTemp.toFixed(2)} ${symbol}`;
  }
}
