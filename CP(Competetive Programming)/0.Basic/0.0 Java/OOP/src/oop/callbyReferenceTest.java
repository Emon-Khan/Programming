package oop;

public class callbyReferenceTest {
    public static void main(String[] args) {
        callbyReference r1 = new callbyReference();
        r1.name = "Anis";
        System.out.println("Before calling r1 "+r1.name);
        r1.change(r1);
        System.out.println("After calling r1 "+r1.name);
    }
}
