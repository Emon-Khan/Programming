public class InsertionSort {
    public static void main(String[] args) {
        int j;
        int arr[] = { 5, 2, 6, 1, 3, 4 };
        for (int i = 1; i < arr.length; i++) {
            int temp = arr[i];
            for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
        }
        for(int i = 0; i<arr.length; i++){
            System.out.println(arr[i]);
        }
    }

}
