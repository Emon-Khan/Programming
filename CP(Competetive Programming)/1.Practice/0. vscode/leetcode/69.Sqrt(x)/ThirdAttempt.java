import java.util.Scanner;

public class ThirdAttempt {
    public static void main(String[] args) {
        int x;
        Scanner scanner = new Scanner(System.in);
        x = scanner.nextInt();
        int s = 1;
        int e = x - 1;
        int ans = 0;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (mid * mid > x) {
                e = mid - 1;
            } else if (mid * mid < x) {
                s = mid + 1;
            } else {
                ans = mid;
                break;
            }
            ans = e;
        }
        System.out.println(ans);
        scanner.close();
    }

}
