import java.util.Scanner;

public class IntegersSumUptoZero {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] ans = sumZero(n);
        for (int val : ans) {
            System.out.print(val + " ");
        }
        scanner.close();
    }

    public static int[] sumZero(int n) {
        int[] a = new int[n];
        if ((n & 1) == 1) {
            for (int i = 1; i < n; i += 2) {
                a[i] = i;
                a[i + 1] = -i;
            }
        } else {
            for (int i = 0; i < n; i += 2) {
                a[i] = i + 1;
                a[i + 1] = -(i + 1);
            }
        }
        return a;
    }
}
