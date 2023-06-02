
import java.util.*;

public class CarrotCakes {

    public static void main(String[] args) {
        int n, t, k, d;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        t = input.nextInt();
        k = input.nextInt();
        d = input.nextInt();
        double a = (double) n / k;
        int temp1 = (int) Math.ceil(a);
        int value1 = t;
        int value2 = t;
        for (int i = 1; i < temp1; i++) {
            value1 += t;
        }
        double b = (double) k * d / t;
        int temp2 = (int) Math.ceil(b);
        int temp4;
        if (n > temp2) {
            double temp3 = (n - temp2) / (double) k;
            temp4 = (int) Math.ceil(temp3) - 1;
            for (int i = 1; i < temp4; i++) {
                value2 += t;
            }
        }
        if (value1 > value2 + d) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

}
