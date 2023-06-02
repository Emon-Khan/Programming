import java.util.Scanner;

public class Black_and_white_painting {

    public static void main(String... args) {
        Scanner input = new Scanner(System.in);
        while (input.hasNextLong()) {
            long n, m, c;
            n = input.nextLong();
            m = input.nextLong();
            c = input.nextLong();
            if ((n + m + c) == 0) {
                break;
            }
            long a, fa, temp;
            temp = ((n - 8) + 1) * ((m - 8) + 1);
            a = temp / 2;
            if (temp % 2 != 0 && c == 1) {
                fa = a + c;
            } else {
                fa = a;
            }
            System.out.println(fa);
        }

    }

}
