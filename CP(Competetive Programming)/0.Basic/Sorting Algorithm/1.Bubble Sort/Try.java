public class Try {
    public static void main(String[] args) {
        int[] a = { 4, 3, 5, 6, 2, 1 };
        for (int i = a.length - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for(int ans: a){
            System.out.println(ans);
        }
    }
}
