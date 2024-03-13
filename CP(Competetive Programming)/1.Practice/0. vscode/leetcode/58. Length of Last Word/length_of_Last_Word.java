import java.util.Scanner;

public class length_of_Last_Word {
    public static void main(String[] args) {
        String s;
        Scanner scan = new Scanner(System.in);
        s = scan.nextLine();
        length_of_Last_Word obj = new length_of_Last_Word();
        int ans = obj.lengthOfLastWord(s);
        System.out.println(ans);
        scan.close();
    }
    public int lengthOfLastWord(String s) {
        int len = s.length(), count = 0;
        boolean flag = false;
        //int endPoint=len, startPoint=0;
        int i = len-1;
        //System.out.println(len);
        while (i>=0) {
            if(s.charAt(i)==' '&&flag)break;
            if(s.charAt(i)!=' '){
                flag = true;
                count++;
            }
            i--;
        }
        return count;
    }
}
