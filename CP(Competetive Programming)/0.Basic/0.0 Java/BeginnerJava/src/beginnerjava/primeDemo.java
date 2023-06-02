package beginnerjava;

import java.util.Scanner;

public class primeDemo {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, flag = 0;
        System.out.print("Enter any number: ");
        n = input.nextInt();
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                System.out.println(n + " is not a prime number");
                flag++;
                break;
            }
        }
        if (flag == 0) {
            System.out.println(n + " is a prime number");
        }
    }
}
