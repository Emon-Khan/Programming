public class BubbleSort {
    public static void main(String[] args) {
        int arr[] = {5, 2, 6, 1, 3, 4};
        /*BubbleSort obj = new BubbleSort();
        obj.Sort(arr, );*/
        for(int i = arr.length-1; i>=0; i--){
            for(int j = i-1; j>=0; j--){
                if(arr[j]>arr[i]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        for(int i = 0; i<arr.length; i++){
            System.out.println(arr[i]);
        }
    }
}
