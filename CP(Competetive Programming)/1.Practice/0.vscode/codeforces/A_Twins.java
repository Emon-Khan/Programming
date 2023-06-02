package codeforces;
import java.util.*;

public class A_Twins {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), sum = 0, cnt = 0, add = 0;
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = input.nextInt();
            sum = sum + arr[i];
        }
        sum = sum / 2;
        Arrays.sort(arr);
        int len = arr.length;
        for (int i = len - 1; i >= 0; i--) {
            add = add + arr[i];
            cnt++;
            if(add>sum){
                break;
            }
        }
        System.out.println(cnt);
        input.close();
    }
}