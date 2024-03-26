package Reverse_String_Word_Wise;

import java.util.Scanner;
import java.util.Vector;

public class ReverseString {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String ans = reverseStringWordWise(s);
        System.out.println(ans);
    }

    public static String reverseStringWordWise(String s) {
        // Vector<String> vec = new Vector<String>();
        StringBuffer str = new StringBuffer();
        int len = s.length();
        int i = 0;
        while (i < len) {
            while (i < len && s.charAt(i) != 32) {
                str.append(s.charAt(i));
                i++;
            }
            str.append(' ');
            i++;
        }
        /*
         * vec.add(str.toString());
         * str.setLength(0);
         */
        return str.reverse().toString();
    }
}
