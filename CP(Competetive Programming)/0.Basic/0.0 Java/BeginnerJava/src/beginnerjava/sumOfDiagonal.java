package beginnerjava;

import java.util.Scanner;

public class sumOfDiagonal {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[][] number1 = new int[3][3];
        int[][] number2 = new int[3][3];
        int[][] sum = new int[3][3];
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
            for(int j = i; j<sum[0].length; j++){
                sum[i][j] = number1[i][j]+number2[i][j];
                break;
            }
        }
        for(int i = 0; i<sum.length; i++){
            for(int j = i; j<sum[0].length; j++){
                System.out.println(sum[i][j]);
                break;
            }
        }
        /*for(int i = 0; i<sum.length; i++){
            for(int j = i; j<sum[0].length; j++){
                System.out.println("");sum[i][j];
                break;
            }
        }
        System.out.println(sum[0][0]);
        System.out.println(sum[1][1]);
        System.out.println(sum[2][2]);
        //+" "+sum[1]1]+" "+sum[2][2]*/
        
    }
}
