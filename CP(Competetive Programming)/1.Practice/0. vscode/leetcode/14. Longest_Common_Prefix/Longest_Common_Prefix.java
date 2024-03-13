
/*import java.util.*;

class Longest_Common_Prefix {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String[] str = new String[205];
        for (int i = 0; i < 5; i++) {
            str[i] = scan.nextLine();
        }
        for(int i = 0; i<str.length; i++){
            System.out.println(str[i]);
        }
        ArrayList<Character> prefix = new ArrayList<>();
        int i, j;
        //String str1 = new String();
        String str1 = str[0];
        //String str2 = new String();
        for (i = 1; i < str1.length(); i++) {
            String str2 = str[i];
            for (j = 0; j < str2.length(); j++) {
                if (str1.charAt(j) == str2.charAt(j)) {
                    prefix.add(str1.charAt(j));
                } else {
                    prefix.clear();
                    break;
                }
            }
        }
        char start = '"';
        char end = '"';
        System.out.print(start);
        for (i = 0; i < prefix.size(); i++) {
            System.out.println(prefix.get(i));
        }
        System.out.println(end);
        scan.close();

    }
}*/
import java.util.*;

class Longest_Common_Prefix {
    public static void main(String[] args) {
        /*
         * Scanner scan = new Scanner(System.in);
         * ArrayList<String> as = new ArrayList<>();
         * for (int i = 0; i < 3; i++) {
         * String s = scan.nextLine();
         * as.add(s);
         * }
         * ArrayList<String> prefix = new ArrayList<>();
         * int i, j, sz;
         * String str1 = as.get(0);
         * str1.
         * // System.out.println(str1);
         * for (i = 1; i < as.size(); i++) {
         * String str2 = as.get(i);
         * System.out.println(str2);
         * System.out.println(str2.length());
         * System.out.println(str1);
         * System.out.println(str1.length());
         * if (str1.length() < str2.length()) {
         * sz = str1.length();
         * } else {
         * sz = str2.length();
         * }
         * System.out.println(sz);
         * for (j = 0; j < sz; j++) {
         * if (str1.charAt(j) == str2.charAt(j)) {
         * prefix.add(str1.substring(j, j+1));
         * } else {
         * prefix.remove(j);
         * }
         * }
         * System.out.println(prefix);
         * //str1=prefix.toString();
         * str1 = "";
         * for(String p: prefix){
         * str1+=p;
         * }
         * }
         * char start = '"';
         * char end = '"';
         * System.out.print(start);
         * for (i = 0; i < prefix.size(); i++) {
         * System.out.print(prefix.get(i));
         * }
         * System.out.println(end);
         * scan.close();
         */
        String[] strs = new String[3];
        Scanner scan = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            strs[i] = scan.nextLine();
        }
        /*
         * for(String s: strs){
         * System.out.println(s);
         * }
         */
        Longest_Common_Prefix obj = new Longest_Common_Prefix();
        String str = obj.longestCommonPrefix(strs);
        System.out.println(str);
        scan.close();
    }

    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String str1 = strs[0];
        String str2 = strs[strs.length - 1];
        System.out.println(str1);
        System.out.println(str2);
        String prefix = "";
        int sz;
        if (str1.length() < str2.length()) {
            sz = str1.length();
        } else {
            sz = str2.length();
        }
        // System.out.println(sz);
        // System.out.println(str1.substring(0, 1));
        // System.out.println(str2.substring(0, 1));
        // if(str1.substring(0, 0+1).equals(str2.substring(0, 0+1))){
        // System.out.println("true");
        // }else{
        // System.out.println("false");
        // }
        for (int i = 0; i < sz; i++) {
            if (str1.substring(i, i + 1).equals(str2.substring(i, i + 1))) {
                prefix += str1.substring(i, i + 1);
            } else {
                break;
            }
        }
        /*
         * for(String s: strs){
         * System.out.println(s);
         * }
         */
        // String[] str = new String();
        return prefix;
        // return strs.toString();
    }
}
