import java.util.Scanner;

public class Find_the_first_occurence {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String haystack = scan.nextLine(); // sadbutsad 9 leetcode 8
        String needle = scan.nextLine(); // sad 3 leeto 5
        // System.out.println(haystack  + " "+ needle);
        Find_the_first_occurence obj = new Find_the_first_occurence();
        int ans = obj.strStr(haystack, needle);
        System.out.println(ans);
        scan.close();
    }

    public int strStr(String haystack, String needle) {
        int haystackLength = haystack.length();
        int needleLength = needle.length();
        // System.out.println(haystackLength +" "+needleLength);
        // System.out.println(haystack.substring(0, needleLength));
        // System.out.println(haystack.substring(0, 0+needleLength)==needle);
        // System.out.println(needle.equals(haystack.substring(0, 0+needleLength)));
        for (int i = 0; i < (haystackLength - needleLength)+1; i++) {
            if(needle.equals(haystack.substring(i, i+needleLength))){
                return i;
            }
        }
        return -1;
    }

}
