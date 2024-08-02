import java.util.Scanner;

/**
 * MinimumAddToMakeParenthesesValid
 */
public class MinimumAddToMakeParenthesesValid {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for (int i = 0; i < t; i++) {
            String s = scan.nextLine();
            int ans = minAddToMakeValid(s);
            System.out.println(ans);
        }
        scan.close(); // (()
    }

    public static int minAddToMakeValid(String s) {
        int l = 0, r = 0, outOfRange = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                l++;
            } else if (s.charAt(i) == ')' && l > r) {
                r++;
            } else {
                outOfRange++;
            }
        }
        return outOfRange+(l-r);
    }
}