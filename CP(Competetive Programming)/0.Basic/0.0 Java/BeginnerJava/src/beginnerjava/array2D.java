package beginnerjava;

import java.util.Scanner;

public class array2D {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[][]number = new int[2][3];
        //System.out.println(number.length+" "+number[0].length);
        for(int i = 0; i<number.length; i++){
            for(int j = 0; j<number[0].length; j++){
                number[i][j] = input.nextInt();
            }
        }
        for(int i = 0; i<number.length; i++){
            for(int j = 0; j<number[0].length; j++){
                System.out.print(number[i][j]+" ");
            }
            System.out.println("");
        }
    }
}
