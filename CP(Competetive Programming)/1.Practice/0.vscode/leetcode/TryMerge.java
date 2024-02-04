public class TryMerge {
    void merge(int arr[], int s, int m, int e) {
        if (arr[s] > arr[e]) {
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
        }
    }

    void sort(int arr[], int s, int e) {
        if (l < r) {
            int m = l + (e - s) / 2;
            sort(arr, s, m);
            sort(arr, m + 1, e);
            merge(arr, s, m, e);
        }
    }

    public static void main(String args[]) {
        int arr[] = { 11, 12, 13, 5, 6, 7 };
        TryMerge obj = new TryMerge();
        obj.sort(arr, 0, arr.length - 1);

    }

}
