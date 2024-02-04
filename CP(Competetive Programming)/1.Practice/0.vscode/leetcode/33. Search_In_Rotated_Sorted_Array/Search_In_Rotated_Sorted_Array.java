import java.util.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Search_In_Rotated_Sorted_Array {
    public static void main(String[] args) {
        int n, q;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scan.nextInt();
        }
        q = scan.nextInt();
        Search_In_Rotated_Sorted_Array obj = new Search_In_Rotated_Sorted_Array();
        System.out.println(obj.calc(a, q));
        scan.close();
    }

    int calc(int[] a, int key) {
        // List<Integer> list1 = new ArrayList<>();
        int index = a.length - 1, startPoint = 0, indexNo;
        for (int i = 0; i < a.length - 1; i++) {
            if (a[i] > a[i + 1]) {
                index = i;
                break;
            }
        }
        Search_In_Rotated_Sorted_Array obj = new Search_In_Rotated_Sorted_Array();
        indexNo = obj.findValue(a, startPoint, index, key);
        if (indexNo == -1) {
            return obj.findValue(a, index + 1, a.length - 1, key);
        }
        return indexNo;

    }

    int findValue(int a[], int startPoint, int endPoint, int key) {
        int halfPoint;
        while (startPoint <= endPoint) {
            halfPoint = (startPoint + endPoint) / 2;
            if (a[halfPoint] < key) {
                startPoint = halfPoint + 1;
            } else if (a[halfPoint] > key) {
                endPoint = halfPoint - 1;
            } else {
                return halfPoint;
            }
        }
        return -1;
    }
}
