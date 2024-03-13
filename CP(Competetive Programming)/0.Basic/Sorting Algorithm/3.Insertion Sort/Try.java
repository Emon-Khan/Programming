public class Try {
    public static void main(String[] args) {
        int j;
        int[] a = { 4, 3, 5, 6, 2, 1 };
        for (int i = 1; i < a.length; i++) {
            int temp = a[i];
            for (j = i - 1; j >= 0 && a[j] > temp; j--) {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
        }
        for (int ans : a) {
            System.out.println(ans);
        }
    }
}
