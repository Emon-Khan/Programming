import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        scan.nextLine();
        String s;
        for (int i = 0; i < t; i++) {
            s = scan.nextLine();
            StringBuffer str = new StringBuffer();
            String c1 = String.valueOf(s.charAt(0));
            int ii = s.charAt(1);
            for (int j = 1; j < 9; j++) {
                if (j != (ii-48)) {
                    str.append(c1 + "" + j);
                    str.append(" ");
                }
            }
            for (int j = 97; j < 105; j++) {
                if(!String.valueOf((char) j).equals(c1)){
                    str.append(String.valueOf((char) j) + "" + (ii - 48));
                    str.append(" ");
                }
            }
            String splited = str.toString();
            splited.split("\\s+");
            String[] words = splited.split(" ");
            for (String word : words) {
                System.out.println(word);
            }
        }
    }
}
