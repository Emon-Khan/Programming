public class Try {
    public static void main(String[] args) {
        int[] a = { 4, 3, 5, 6, 2, 1 };
        for (int i = 0; i < a.length; i++) {
            int min = i;
            for (int j = i + 1; j < a.length; j++) {
                if (a[j] < a[min]) {
                    min = j;
                }
            }
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        for (int ans : a) {
            System.out.println(ans);
        }
    }
}
