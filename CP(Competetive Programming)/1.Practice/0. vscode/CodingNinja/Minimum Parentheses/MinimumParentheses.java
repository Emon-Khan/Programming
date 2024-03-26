import java.util.Scanner;

public class MinimumParentheses {
    public static void main(String[] args) {
        int t;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        scan.nextLine();
        for (int i = 0; i < t; i++) {
            String pattern = scan.nextLine();
            int ans = minimumParentheses(pattern);
            System.out.println(ans);
        }
    }

    public static int minimumParentheses(String pattern) {
        int ans = 0, bal = 0;
        for (int i = 0; i < pattern.length(); i++) {
            if (pattern.charAt(i) == '(') {
                bal += 1;
            } else {
                bal += -1;
            }
            if (bal == -1) {
                ans++;
                bal++;
            }
        }
        return ans + bal;
    }
}
