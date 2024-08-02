//unsolved
import java.util.Scanner;

public class C {

    public static void main(String[] args) {
        int t;
        Scanner scan = new Scanner(System.in);
        long a, b;
        t = scan.nextInt();
        for (int i = 1; i <= t; i++) {
            int count = 0;
            a = scan.nextLong();
            b = scan.nextLong();
            long ans = calc(b) - calc(a - 1);
            /*for (long j = a; j <= b; j++) {
                if (j % 3 != 1) {
                    count++;
                }
            }*/
            System.out.println("Case " + i + ": " + ans);
        }
    }

    static long calc(long num) {
        num -= 1;
        num = num - num / 3;
        return num;
    }
}