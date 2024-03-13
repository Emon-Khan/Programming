import java.util.Scanner;
import java.util.Vector;

public class ReverseWordsInaString {
    public static void main(String[] args) {
        String str = new String();
        Scanner scan = new Scanner(System.in);
        str = scan.nextLine();
        String ans = reverseWords(str);
        System.out.println(ans);
    }

    public static String reverseWords(String str) {
        StringBuffer s = new StringBuffer();
        Vector<testPair> vec = calc(str);
        for (int index = vec.size() - 1; index >= 0; index--) {
            // System.out.println(ans.get(index).x + " " + ans.get(index).y);
            int i = vec.get(index).x;
            int j = vec.get(index).y;
            while (i <= j) {
                s.append(str.charAt(i));
                i++;
            }
            if (index != 0) {
                s.append(' ');
            }
        }
        return s.toString();
    }

    public static Vector<testPair> calc(String str) {
        int startPoint = -1, endPoint = -1;
        int flag = 0;
        Vector<testPair> vec = new Vector<testPair>();
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) != ' ' && flag == 0) {
                startPoint = endPoint = i;
                flag++;
            } else if (str.charAt(i) != ' ') {
                endPoint++;
            } else if (str.charAt(i) == ' ' && i != 0 && startPoint >= 0 && endPoint >= 0) {
                flag = 0;
                testPair obj = new testPair(startPoint, endPoint);
                vec.add(obj);
                startPoint = endPoint = -1;
            }
        }
        if (flag == 1) {
            testPair obj = new testPair(startPoint, endPoint);
            vec.add(obj);
        }
        // s.toString();
        return vec;
    }
}

class testPair {
    int x, y;

    testPair(int x, int y) {
        this.x = x;
        this.y = y;
    }
}
