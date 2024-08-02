public class RotateArray {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        int k = 9;
        int[] ans = rotateArray(arr, k);
        for (int val : ans)
            System.out.println(val);
    }

    public static int[] rotateArray(int[] ar, int k) {
        int size = ar.length;
        k = k % size;
        if (k != 0) {
            reverseArray(ar, 0, size - 1);
            reverseArray(ar, k, size - 1);
            reverseArray(ar, 0, k - 1);
        }
        return ar;
    }

    public static void reverseArray(int[] ar, int left, int right) {
        while (left < right) {
            ar[left] += ar[right];
            ar[right] = ar[left] - ar[right];
            ar[left] -= ar[right];
            left++;
            right--;
        }
    }

}
