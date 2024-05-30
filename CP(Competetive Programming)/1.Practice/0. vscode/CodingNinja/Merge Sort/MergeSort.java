class MergeSort {
    void merge(int[] arr, int startPoint, int mid, int endPoint) {
        int n1 = mid - startPoint + 1;
        int n2 = endPoint - mid;
        int L[] = new int[n1];
        int R[] = new int[n2];
        for (int i = 0; i < n1; i++) {
            L[i] = arr[startPoint + i];
        }
        for (int j = 0; j < n2; j++) {
            R[j] = arr[mid + 1 + j];
        }
        int i = 0, j = 0;
        int k = startPoint;
        while (i < n1 && j < n2) {
            if (L[i] >= R[j]) {
                arr[k] = R[j];
                j++;
            } else {
                arr[k] = L[i];
                i++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    void sort(int[] arr, int startPoint, int endPoint) {
        if (startPoint < endPoint) {
            int mid = startPoint + (endPoint - startPoint) / 2;
            sort(arr, startPoint, mid);
            sort(arr, mid + 1, endPoint);
            merge(arr, startPoint, mid, endPoint);
        }

    }

    public static void main(String[] args) {
        int arr[] = { 8, 4, 3, 6 };
        MergeSort ob = new MergeSort();
        ob.sort(arr, 0, arr.length - 1);
        for (int val : arr) {
            System.out.println(val);
        }
    }
}