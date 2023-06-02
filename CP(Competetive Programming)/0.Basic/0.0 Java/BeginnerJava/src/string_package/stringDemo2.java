package string_package;

public class stringDemo2 {
    public static void main(String[] args) {
        String firstName = "Emon";
        String lastName = " Khan";
        
        String fullName = firstName.concat(lastName);
        System.out.println(fullName);
        String upperName = fullName.toUpperCase();
        System.out.println(upperName);
        String lowerName = fullName.toLowerCase();
        System.out.println(lowerName);
        
        boolean b = fullName.startsWith("E");
        System.out.println(b);
    }
}
