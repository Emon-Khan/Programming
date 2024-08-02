import java.util.Scanner;

public class H {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        while (true) {
            long n = scan.nextLong();
            if (n == 0)
                break;
            long sq = (long) Math.sqrt(n);
            if (sq * sq == n) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }
    }
}
