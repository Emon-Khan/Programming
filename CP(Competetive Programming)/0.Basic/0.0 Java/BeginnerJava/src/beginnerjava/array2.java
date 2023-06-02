package beginnerjava;

import java.util.Scanner;

public class array2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double[] number = new double[5];
        int sum = 0;
        for(int i = 0; i<number.length; i++){
            number[i] = input.nextDouble();
        }
        for(int i = 0; i<number.length; i++){
            System.out.println(number[i]);
        }
        for(int i = 0; i<number.length; i++){
            sum += number[i];
        }
        System.out.println(sum);
        int avg = sum/number.length;
        System.out.println(avg);
        
    }
}
