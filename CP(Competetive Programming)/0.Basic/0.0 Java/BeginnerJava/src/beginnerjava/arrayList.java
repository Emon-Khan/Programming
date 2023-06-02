package beginnerjava;

import java.util.ArrayList;
import java.util.Iterator;
public class arrayList {
    public static void main(String[] args) {
        ArrayList<Integer>number = new ArrayList<Integer>();
        //System.out.println("Size = "+number.size());
        number.add(10);
        number.add(20);
        number.add(30);
        number.add(50);
        number.add(1, 40);
        /*Iterator itr = number.iterator();
        while(itr.hasNext()){
            System.out.println(" "+itr.next());
        }*/
        /*for(int x: number){
            System.out.print(" "+x);
        }*/
        //System.out.println(number);
        //System.out.println("Size = "+number.size());
        //number.remove(2);
        System.out.println(" "+number);
        boolean b = number.contains(30);
        System.out.println(b);
        int index = number.indexOf(40);
        System.out.println(index);
        number.set(2, 18);
        System.out.println(number);
        System.out.println(number.get(1));
        
    }
}
