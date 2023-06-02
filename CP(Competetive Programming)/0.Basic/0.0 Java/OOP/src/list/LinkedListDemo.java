package list;

import java.util.LinkedList;

public class LinkedListDemo {

    public static void main(String[] args) {
        LinkedList<String> countryNames = new LinkedList<>();
        countryNames.add("Bangladesh");
        countryNames.add("Afganisthan");
        countryNames.add("Pakistan");
        countryNames.add("India");
        countryNames.add(4, "Wales");
        countryNames.addFirst("Japan");
        countryNames.addLast("China");
        countryNames.remove("China");
        //System.out.println(countryNames);
        for(String country: countryNames){
            System.out.println(country);
        }
        System.out.println("Size of the LinkedList : "+countryNames.size());
    }
}
