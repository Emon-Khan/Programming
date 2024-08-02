import java.util.Scanner;

public class I {
    public static void main(String[] args) {
        int t, a, b;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        for (int i = 1; i <= t; i++) {
            a = scan.nextInt();
            b = scan.nextInt();
            int sum = 0;
            for (int j = a; j <= b; j++) {
                if ((j&1)==1) {
                    sum += j;
                    j++;
                }
            }
            System.out.println("Case "+i+": "+sum);
        }
    }
}
