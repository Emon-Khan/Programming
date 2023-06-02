package beginnerjava;

import java.util.Arrays;

public class arraySort {
    public static void main(String[] args) {
        int[] number = {10, -3, 6, 8, 9};
        Arrays.sort(number);
        for(int i = 0; i<number.length; i++){
            System.out.println(" "+number[i]);
        }
        for(int i = number.length-1; i>=0 ; i--){
            System.out.println(" "+number[i]);
        }
        String[] name = {"Pinky", "Masum", "Tanzila", "Sahid"};
        Arrays.sort(name);
        for(int i = 0; i<name.length; i++){
            System.out.println(" "+name[i]);
        }
        
    }
}
