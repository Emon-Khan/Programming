import java.util.*;

public class Java_Loops_II {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        for (int i = 0; i < q; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int n = scan.nextInt();
            int ans = a;
            for (int j = 0; j < n; j++) {
                ans += Math.pow(2, j) * b;
                System.out.print(ans);
                System.out.print(" ");
            }
            System.out.println();
        }
        scan.close();
    }

}
