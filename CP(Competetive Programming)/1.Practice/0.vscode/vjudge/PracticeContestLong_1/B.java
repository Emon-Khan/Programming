import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.Scanner;

public class B {
    public static void main(String[] args) {
        final double p = 2 * Math.acos(0.0);
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for (int i = 1; i <= t; i++) {
            double r = scan.nextDouble();
            // DecimalFormat df = new DecimalFormat("#.##");
            // df.setRoundingMode(RoundingMode.CEILING);
            double ans = Math.pow((2 * r), 2) - (p * Math.pow(r, 2));
            ans = Math.round(ans * 100.0) / 100.0;
            // System.out.println("Case " + i + ": " + ans);
            // System.out.println("Case " + i + ": " + df.format(ans));
            System.out.printf("Case %d: %.2f\n", i, ans);
        }
    }

}