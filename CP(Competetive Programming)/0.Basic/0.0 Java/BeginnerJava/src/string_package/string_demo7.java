package string_package;

public class string_demo7 {

    public static void main(String[] args) {
        //premitive to string
        double i = 100.19;
        String s = Double.toString(i);
        System.out.println(s);
        
        //string to premitive
        String s1 = "32";
        double i1 = Double.parseDouble(s1);
        System.out.println(i1);
        
    }
}
