package Rotate_an_Array_By_K;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class RotateAnArray {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            int val = scan.nextInt();
            list.add(val);
        }
        ArrayList<Integer> ans =  rotateArray(list, k);
        System.out.println(ans);
        scan.close();
    }
    public static ArrayList<Integer> rotateArray(ArrayList<Integer> list, int k){
        
        return list;
    }
}
