public class InsertionSort {
    public static void sort(int n, int[] arr) {
        for (int i = 0; i < n - 1; i++) {
            int j = i;
            int key = arr[i + 1];
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        int n = 5;
        int arr[] = { 23, 1, 10, 5, 2 };
        sort(n, arr);
        for (int val : arr) {
            System.out.println(val);
        }
        // System.out.println(arr);
    }
}