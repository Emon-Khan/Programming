public class QuickSort {
    public int quickSort(int[] arr, int s, int e) {
        int pivot = arr[e];
        int i = s - 1;
        for (int j = s; j < e; j++) {
            if (arr[j] <= pivot) {
                i++;
                if (i != j) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[e];
        arr[e] = temp;
        return i + 1;
    }

    public int[] sort(int[] arr, int s, int e) {
        if (s < e) {
            int point = quickSort(arr, s, e);
            sort(arr, s, point - 1);
            sort(arr, point + 1, e);
        }
        return arr;
    }

    public static void main(String[] args) {
        int[] arr = { 52, 6, 7, 1, 9, 5 };
        QuickSort obj = new QuickSort();
        int[] ans = obj.sort(arr, 0, arr.length - 1);
        for (int i = 0; i < ans.length; i++) {
            System.out.println(ans[i]);
        }
    }
}
