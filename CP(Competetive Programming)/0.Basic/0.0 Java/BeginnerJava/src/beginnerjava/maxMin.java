package beginnerjava;

import java.util.Scanner;


public class maxMin {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] number = new int[5];
        for(int i = 0; i<number.length; i++){
            number[i] = input.nextInt();
        }
        int max = number[0];
        int min = number[0];
        for(int i = 0; i<number.length; i++){
            if(number[i]>max){
                max = number[i];
            }
        }
        System.out.println(max);
        for(int i = 0; i<number.length; i++){
            if(number[i]<min){
                min = number[i];
            }
        }
        System.out.println(min);
    }
}
