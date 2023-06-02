package beginnerjava;

import java.util.ArrayList;

public class arrayListDemo {
    public static void main(String[] args) {
        ArrayList<Integer> number1 = new ArrayList<Integer>();
        ArrayList<Integer> number2 = new ArrayList<Integer>();
        ArrayList<Integer> number3 = new ArrayList<Integer>();
        
        number1.add(10);
        number1.add(20);
        number1.add(30);
        number1.add(40);
        System.out.println("Number 1 = "+number1);
        
        number2.add(1);
        number2.add(2);
        number2.add(3);
        number2.add(4);
        System.out.println("Number 2 = "+number2);
        
        number3.addAll(number1);
        System.out.println("Number 3 = "+number3);
        boolean eq = number1.equals(number3);
        System.out.println(eq);
        
    }
}
