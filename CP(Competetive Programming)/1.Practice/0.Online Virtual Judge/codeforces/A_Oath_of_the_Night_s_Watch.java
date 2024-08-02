package codeforces;

import java.util.*;
/**
 * A_Oath_of_the_Night_s_Watch
 */
/*public class A_Oath_of_the_Night_s_Watch {

    
}*/

class A_Oath_of_the_Night_s_Watch {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for (int i = 0; i < n; i++) {
            ar[i] = in.nextInt();
        }
        Arrays.sort(ar);
        int flag = 0;
        for (int i = 1; i < n - 1; i++) {
            if (ar[i] > ar[0] && ar[i] < ar[n - 1]) {
                flag++;
                //System.out.println(flag);
            }
        }
        System.out.println(flag);
        in.close();
    }
}
