package Overloading;

public class Calculation {

    public int add(int x, int y) {
        return x + y;
    }
    public float add(int x, float y) {
        return x + y;
    }

    public int add(int x, int y, int z) {
        return x + y + z;
    }
    public static void main(String[] args){
        Calculation calculation = new Calculation();
        System.out.println(calculation.add(3, 5));
        System.out.println(calculation.add(3, 5, 8));
        System.out.println(calculation.add(5, 6.0f));
    }
}
