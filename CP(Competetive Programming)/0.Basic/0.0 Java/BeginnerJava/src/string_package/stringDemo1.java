package string_package;

public class stringDemo1 {
    public static void main(String[] args) {
        String s1 = "";
        String s2 = new String("Emon Khan");
        
        char[] s3 = {'e', 'm', 'o', 'n'};
        System.out.println(s3);
        
        System.out.println("s1 = "+s1);
        System.out.println("s2 = "+s2);
        
        System.out.println(s1.length());
        
        boolean con = s2.contains("em");
        System.out.println(con);
        boolean check = s1.isEmpty();
        System.out.println(check);
    }
}
