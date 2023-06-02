package beginnerjava;

import java.util.Scanner;

public class timeTable {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int timeTable = 1;
        int n;
        System.out.print("Enter any number: ");
        n = input.nextInt();
        for (int i = 1; i <= 10; i++) {
            timeTable = n*i;
            System.out.println(n+"X"+i+"="+timeTable);
        }
    }
}
