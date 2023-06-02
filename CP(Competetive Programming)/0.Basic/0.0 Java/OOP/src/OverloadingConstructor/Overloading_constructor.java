package OverloadingConstructor;

public class Overloading_constructor {
    public static void main(String[] args) {
        teacher teacher1 = new teacher();
        teacher teacher2 = new teacher("Emon", "Male");
        teacher teacher3 = new teacher("Emon", "Male", 880199390);
        
        teacher2.displayInformation();
        teacher3.displayInformation();
    }
}
