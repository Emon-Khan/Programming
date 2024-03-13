public class Sort_An_Array {
    int[] merge(int arr[], int s, int m, int e) {
        //int[] ans = arr;
        int n1 = m - s + 1;
        int n2 = e - m;

        int S[] = new int[n1];
        int E[] = new int[n2];

        for (int i = 0; i < n1; i++) {
            S[i] = arr[s + i];
        }
        for (int i = 0; i < n2; i++) {
            E[i] = arr[m + i + 1];
        }

        int i = 0, j = 0;
        int k = s;
        while (i < n1 && j < n2) {
            if (S[i] < E[j]) {
                arr[k] = S[i];
                i++;
            } else {
                arr[k] = E[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = S[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = E[j];
            j++;
            k++;
        }
        return arr;
    }

    int[] sort(int arr[], int s, int e) {
        //int[] ans = arr;
        if (s < e) {
            int m = s + (e - s) / 2;
            sort(arr, s, m);
            sort(arr, m + 1, e);
            merge(arr, s, m, e);
        }
        return arr;
    }
    public static void main(String[] args) {
        int arr[] = { 5, 2, 3, 1 };
        Sort_An_Array obj = new Sort_An_Array();
        int[] ans = obj.sort(arr, 0, arr.length - 1);
        for (int i = 0; i < ans.length; i++) {
            System.out.println(ans[i]);
        }
    }    
}
