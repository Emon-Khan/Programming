import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        int t;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        long n;
        for (int i = 0; i < t; i++) {
            n = scan.nextLong();
            if (n == 1) {
                System.out.println(0);
            } else {
                long sq_n = (long) Math.sqrt(n);
                System.out.println((1 << sq_n) - 1);
            }
        }
    }
}