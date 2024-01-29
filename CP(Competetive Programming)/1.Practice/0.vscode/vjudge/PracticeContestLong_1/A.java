import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        int t, n, d, total;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        for (int i = 1; i <= t; i++) {
            n = scan.nextInt();
            total = 0;
            for (int j = 0; j < n; j++) {
                d = scan.nextInt();
                if (d >= 0)
                    total += d;
            }
            System.out.println("Case " + i + ": " + total);
        }
    }
}
