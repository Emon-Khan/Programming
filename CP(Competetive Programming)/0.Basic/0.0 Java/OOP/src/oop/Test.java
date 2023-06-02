package oop;

public class Test {

    public static void main(String[] args) {
        Teacher teacher1;
        teacher1 = new Teacher("Emon Khan", "Male", +880164848);
        //teache12.setInformation();
        teacher1.displayInformation();
        Teacher teacher2;
        teacher2 = new Teacher("Shoriful Islam", "Male", +880199390);
        //teacher2.setInformation();
        teacher2.displayInformation();
        
        Teacher teacher3 = new Teacher();
        teacher3.displayInformation();
    }
}
