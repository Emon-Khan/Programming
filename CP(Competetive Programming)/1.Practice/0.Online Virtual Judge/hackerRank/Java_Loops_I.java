import java.util.*;

public class Java_Loops_I {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        for (int i = 1; i <= 10; i++) {
            int ans = N * i;
            System.out.println(N + " x " + i + " = " + ans);
        }
        scan.close();
    }

}
