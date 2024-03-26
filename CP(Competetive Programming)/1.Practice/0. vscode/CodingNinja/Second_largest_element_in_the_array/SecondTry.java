package Second_largest_element_in_the_array;

import java.util.Scanner;

public class SecondTry {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            int val = scan.nextInt();
            arr[i] = val;
        }
        int ans = findSecondLargest(n, arr);
        System.out.println(ans);
        scan.close();
    }

    public static int findSecondLargest(int n, int arr[]) {
        int largest, secondLargest;
        if (n == 1) {
            secondLargest = -1;
        } else {
            largest = arr[0];
            secondLargest = arr[1];
            for (int i = 0; i < n; i++) {
                if (arr[i] > largest) {
                    secondLargest = largest;
                    largest = arr[i];
                } else if (arr[i] < largest && arr[i] > secondLargest) {
                    secondLargest = arr[i];
                }
            }
            if (largest == secondLargest) {
                secondLargest = -1;
            }
        }
        return secondLargest;
    }
}