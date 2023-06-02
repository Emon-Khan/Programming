package beginnerjava;

import java.util.Scanner;

public class primeTest {

    public static void main(String[] args) {
        int m, n, count = 0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter initial no: ");
        m = input.nextInt();
        System.out.print("Enter final no: ");
        n = input.nextInt();
        for (int i = m; i <= n; i++) {
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    System.out.println(i % j);
                    count++;
                    break;
                }
            }
            if (count != 0) {
                System.out.println(i + " is not a prime no");
                count = 0;
            } else {
                System.out.println(i + " is a prime no");
            }
        }
    }
}
