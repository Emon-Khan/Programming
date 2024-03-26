package Second_largest_element_in_the_array;

import java.util.Scanner;

public class SecondLargest {
    public static void main(String[] args) {
        int t, n;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        scan.nextLine();
        for (int i = 0; i < t; i++) {
            n = scan.nextInt();
            int[] arr = new int[n];
            for (int j = 0; j < n; j++) {
                int val = scan.nextInt();
                arr[j] = val;
            }
            /*
             * for (int temp : arr) {
             * System.out.println(temp);
             * }
             */
            int ans = findSecondLargest(n, arr);
            System.out.println(ans);
        }
    }

    public static int findSecondLargest(int n, int[] arr) {
        int largest = Integer.MIN_VALUE, secondLargest = largest;
        if (n < 2) {
            return -1;
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i];
            }
        }
        if (secondLargest == Integer.MIN_VALUE) {
            return -1;
        }
        return secondLargest;
    }
}
