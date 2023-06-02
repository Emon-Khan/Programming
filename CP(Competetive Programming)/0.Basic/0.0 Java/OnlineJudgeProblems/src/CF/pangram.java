
import java.util.*;

public class pangram {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.nextLine();
        if(isPangram(s.toLowerCase())){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        //s = s.toLowerCase();
        /*char charArray[] = s.toCharArray();
        Arrays.sort(charArray);
        /*for(int i = 0; i<n; i++){
            System.out.println(charArray);
        }
        System.out.println(new String(charArray));  */
    }

    private static boolean isPangram(String s) {
        if (s.length() <= 26) {
            return false;
        }else{
            for(char ch= 'a'; ch<='z'; ch++){
                if(s.indexOf(ch)<0){
                    return false;
                }
            }
            return true;
        }
    }
}
