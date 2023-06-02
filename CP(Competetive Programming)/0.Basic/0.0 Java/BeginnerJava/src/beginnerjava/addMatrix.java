package beginnerjava;

import java.util.Scanner;

public class addMatrix {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[][] number1 = new int[3][4];
        int[][] number2 = new int[3][4];
        int[][] sum = new int[3][4];
        for(int i = 0; i<number1.length; i++){
            for(int j = 0; j<number1[0].length; j++){
                number1[i][j]=input.nextInt();
            }
        }
        for(int i = 0; i<number2.length; i++){
            for(int j = 0; j<number2[0].length; j++){
                number2[i][j]=input.nextInt();
            }
        }
        for(int i = 0; i<sum.length; i++){
            for(int j = 0; j<sum[0].length; j++){
                sum[i][j]=number2[i][j]+number1[i][j];
            }
        }
        for(int i = 0; i<sum.length; i++){
            for(int j = 0; j<sum[0].length; j++){
                System.out.println(" "+sum[i][j]);
            }
            System.out.println("");
        }
    }
}
