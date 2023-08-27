import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class RomantoInteger {
    public static void main(String[] args) {
        String s;
        Scanner scan = new Scanner(System.in);
        s = scan.nextLine();
        RomantoInteger obj = new RomantoInteger();
        System.out.println(obj.romanToInt(s));
        scan.close();
    }

    public int romanToInt(String s) {
        int sum = 0;
        Map<Character, Integer> map = new HashMap<>();
        map.put('I', 1);
        map.put('V', 5);
        map.put('X', 10);
        map.put('L', 50);
        map.put('C', 100);
        map.put('D', 500);
        map.put('M', 1000);
        int sz = s.length();
        int i, j;
        for (i = sz - 1, j = i - 1; i > 0; i--, j--) {
            int val1 = map.get(s.charAt(i));
            int val2 = map.get(s.charAt(j));
            if (val1 > val2) {
                sum += (val1 - val2);
                --i;
                --j;
            } else if (val1 <= val2) {
                sum += val1;
            }
        }
        if (i == 0) {
            sum += map.get(s.charAt(0));
        }
        return sum;
        /*
         * int sum = condition(s.charAt(0));
         * return 0;
         */
        /*
         * for(Map.Entry<String, Integer> e: map.entrySet()){
         * System.out.println(e.getKey()+" "+e.getValue());
         * }
         */
    }
    /*
     * public int condition(char c){
     * if(c=='I'){
     * return 1;
     * }else if(c=='V'){
     * return 5;
     * }else if(c=='X'){
     * return 10;
     * }else if(c=='L'){
     * return 50;
     * }else if(c=='C'){
     * return 100;
     * }
     * else if(c=='D'){
     * return 500;
     * }
     * else if(c=='M'){
     * return 1000;
     * }
     * return 0;
     * }
     */
}