package string_package;

public class StringDemo3 {
    public static void main(String[] args) {
        String country = "   Bangladesh is my    country    ";;
        System.out.println(country);
        char ch = country.charAt(0);
        System.out.println(ch);
        int value = country.codePointAt(0);
        System.out.println(value);
        int pos = country.indexOf('y');
        System.out.println(pos);
        int lastPos = country.lastIndexOf('y');
        System.out.println(lastPos);
        String s3 = country.trim();
        System.out.println(s3);
        
    }
}
