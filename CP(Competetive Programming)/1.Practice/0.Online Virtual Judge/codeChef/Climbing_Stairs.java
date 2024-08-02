import java.util.*;

public class Climbing_Stairs {
    public static int countSetBits(int a) {
        int setBitCounter = 0;
        while (a != 0) {
            a = a & (a - 1);
            setBitCounter++;
        }
        return setBitCounter;
    }

    public static void main(String args[]) {
        int T, N, G;
        Scanner scan = new Scanner(System.in);
        T = scan.nextInt();
        for (int i = 0; i < T; i++) {
            N = scan.nextInt();
            G = scan.nextInt();
            long mod = 1000000007;
            int ar[] = new int[1000001];
            ar[0] = ar[1] = 1;
            for (int j = 2; j < 1000001; j++) {
                ar[j] = (int) ((ar[j - 1] + ar[j - 2]) % mod);
            }
            if (countSetBits(ar[N]) == G) {
                System.out.println("CORRECT");
            } else {
                System.out.println("INCORRECT");
            }
        }
        scan.close();
    }
}