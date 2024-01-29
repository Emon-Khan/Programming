import java.util.Scanner;

public class D {
    public static void main(String[] args) {
        int t; 
        long n, m;     
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        /*
         * for (int i = 1; i <= t; i++) {
         * n = scan.nextInt();
         * m = scan.nextInt();
         * int negVal = 0, posVal = 0;
         * for (int j = 1; j <= m; j++) {
         * negVal += j;
         * posVal += j + m;
         * preNegVal = negVal;
         * prePosVal = posVal;
         * }
         * for (int j = 1; j < ((n / m) / 2); j++) {
         * preNegVal = (m * (m * 2)) + preNegVal;
         * prePosVal = (m * (m * 2)) + prePosVal;
         * negVal += preNegVal;
         * posVal += prePosVal;
         * }
         * System.out.println("Case " + i + ": " + (posVal - negVal));
         * }
         */
        for (int i = 1; i <= t; i++) {
            n = scan.nextLong();
            m = scan.nextLong();
            long ans = (n * m) / 2;
            System.out.println("Case " + i + ": " + ans);
        }
    }
}
