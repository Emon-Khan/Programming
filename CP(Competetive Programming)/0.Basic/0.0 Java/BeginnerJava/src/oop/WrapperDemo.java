package oop;

public class WrapperDemo {
    public static void main(String[] args) {
        //primitive -> object
        int x = 30;
        Integer y = Integer.valueOf(x);
        System.out.println(y);
        Integer z = x;
        System.out.println(z);
        
        //object -> primitive
        Double d = new Double(2.5);
        System.out.println(d);
        double e = d.doubleValue();
        System.out.println(e);
    }
}
