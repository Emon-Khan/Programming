package oop.method_overloading;

public class test {
    public static void main(String[] args) {
        overload ob = new overload();
        ob.add();
        ob.add(5, 6);
        ob.add(6.5, 5.6);
        ob.add(8, 9, 10);
        ob.add(2, 3);
    }
}
