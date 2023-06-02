package beginnerjava;

import java.util.Scanner;

public class multiplicationSum {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int multiple = 1;
        int n;
        System.out.print("Enter final no: ");
        n = input.nextInt();
        for(int i = 1; i<=n; i++){
            multiple *= i;
        }
        System.out.println("Multiple: "+multiple);
    }
}
