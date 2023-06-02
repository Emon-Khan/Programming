package list;

import java.util.HashMap;

public class hashMapdemo {
    public static void main(String[] args) {
        HashMap<Integer, String> customer = new HashMap <>();
        customer.put(101, "Anis");
        customer.put(102, "Pinak");
        customer.put(103, "Pinak");
        
        System.out.println(customer.get(103));
        System.out.println(customer.size());
    }
}
