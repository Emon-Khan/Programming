package returningValue;

public class Test {
    public static void main(String[] args) {
        returningValueDemo ob1 = new returningValueDemo();
        //int result = ob1.square(5);
        System.out.println("Square of 5 = "+ob1.square(5));
        
        returningValueDemo ob2 = new returningValueDemo();
        System.out.println("Square of 7 = "+ob2.square(7));
    }
}
