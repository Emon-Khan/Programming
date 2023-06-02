package list;

import java.util.HashSet;

public class hashSetDemo {
    public static void main(String[] args) {
        HashSet<String> fruitsName = new HashSet<> ();
        
        fruitsName.add("Apple");
        fruitsName.add("Banana");
        fruitsName.add("Guava");
        fruitsName.add("Malta");
        fruitsName.add("Orange");
        
        System.out.println(fruitsName);
        System.out.println("Size : "+fruitsName.size());
        fruitsName.remove("Apple");
        System.out.println(fruitsName);
    }
}
