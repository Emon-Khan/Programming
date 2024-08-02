import java.util.Scanner;

public class AddBinary {
    public static void main(String[] args) {
        String a, b;
        Scanner scan = new Scanner(System.in);
        a = scan.nextLine();
        b = scan.nextLine();
        System.out.println(a + " " + b);
        AddBinary obj = new AddBinary();
        String ans = obj.addBinary(a, b);
        System.out.println(ans);
    }

    public String addBinary(String a, String b) {
        StringBuffer ans = new StringBuffer();
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while (i >= 0 || j >= 0 || carry == 1) {
            if (i >= 0)
                carry += a.charAt(i--) - '0';
            if (j >= 0)
                carry += b.charAt(j--) - '0';
            ans.append(carry % 2);
            carry /= 2;
        }
        return ans.reverse().toString();
    }
}