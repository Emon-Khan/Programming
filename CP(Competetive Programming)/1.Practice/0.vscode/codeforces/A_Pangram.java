package codeforces;
import java.util.*;

public class A_Pangram {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        String s = input.nextLine();
        s = s.toLowerCase();
        int frequency[] = new int[26];
        for(int i = 0; i<n; i++){
            frequency[s.charAt(i)-'a']++;
        }
        int count = 0;
        for(int i = 0; i<26; i++){
            if(frequency[i]!=0){
                count++;
            }
        }
        if(count == 26){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        /*
         * if(isPangram(s.toLowerCase())){ System.out.println("YES"); }else{
         * System.out.println("NO"); }
         */
        // s = s.toLowerCase();
        /*
         * char charArray[] = s.toCharArray(); Arrays.sort(charArray); /*for(int i = 0;
         * i<n; i++){ System.out.println(charArray); } System.out.println(new
         * String(charArray));
         */
        input.close();
    }

    /*
     * private static boolean isPangram(String s) { if (s.length() <= 26) { return
     * false; }else{ for(char ch= 'a'; ch<='z'; ch++){ if(s.indexOf(ch)<0){ return
     * false; } } return true; } }
     */
}
