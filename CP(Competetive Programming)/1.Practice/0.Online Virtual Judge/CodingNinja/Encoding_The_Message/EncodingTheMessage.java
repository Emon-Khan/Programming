import java.util.Scanner;

/**
 * EncodingTheMessage
 */
public class EncodingTheMessage {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        for (int i = 0; i < t; i++) {
            String message = scan.nextLine();
            String ans = encode(message);
            System.out.println(ans);
        }
    }

    public static String encode(String message) { // aabbc abcd abbdcaas
        StringBuffer str = new StringBuffer();
        int count = 1;
        Character ch = message.charAt(0);
        str.append(ch);
        for (int i = 1; i < message.length(); i++) {
            if (ch == message.charAt(i)) {
                count++;
            } else {
                ch = message.charAt(i);
                str.append(count);
                count = 1;
                str.append(ch);
            }
        }
        str.append(count);
        return str.toString();
    }
}