import java.util.Scanner;

/**
 * MinRemoveMakeValParent
 */
public class MinRemoveMakeValParent {
    public static void main(String[] args) {
        int t;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        scan.nextLine();
        for (int i = 0; i < t; i++) {
            String s = scan.nextLine();
            String ans = minRemoveToMakeValid(s);
            System.out.println(ans);
        }
        scan.close();
    }

    public static String minRemoveToMakeValid(String s) {
            StringBuffer str = new StringBuffer();
            int l = 0, r = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == '(') {
                    str.append(s.charAt(i));
                    l++;
                } else if (s.charAt(i) == ')') {
                    if (l > r) {
                        str.append(s.charAt(i));
                        r++;
                    }
                } else {
                    str.append(s.charAt(i));
                }
            }
            if (l == r) {
                return str.toString();
            } else {
                StringBuffer finalStr = new StringBuffer();
                for (int i = str.length() - 1; i >= 0; i--) {
                    if (str.charAt(i) == ')') {
                        finalStr.append(str.charAt(i));
                    } else if (str.charAt(i) == '(') {
                        if (l <= r) {
                            finalStr.append(str.charAt(i));
                        } else {
                            l--;
                        }
                    } else {
                        finalStr.append(str.charAt(i));
                    }
                }
                return finalStr.reverse().toString();
            }
    }

}