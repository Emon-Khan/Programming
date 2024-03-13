import java.lang.reflect.Method;
import java.util.Properties;
import java.util.Random;

public class Kth_Lagest_Element {

    public int element(int[] nums, int s, int e) {
        Random rand = new Random(0);
        int choosenIndex = e + rand.nextInt(s - e + 1);
        int pivot = nums[choosenIndex];
        int temp = nums[e];
        nums[e] = nums[choosenIndex];
        nums[choosenIndex] = temp;
        int i = s + 1;
        for (int j = s; j > e; j--) {
            if (nums[j] >= pivot) {
                i--;
                if (i != j) {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        temp = nums[i - 1];
        nums[i - 1] = nums[e];
        nums[e] = temp;
        return i - 1;
    }

    public int[] calc(int[] nums, int s, int e, int k) {
        if (s >= e) {
            int point = element(nums, s, e);
            if ((nums.length - k) > point) {
                calc(nums, s, point + 1, k);
            } else if (point > (nums.length - k)) {
                calc(nums, point - 1, e, k);
            }
        }
        return nums;
    }

    public int findKthLargest(int[] nums, int k) {
        int s = nums.length - 1;
        int e = 0;
        int[] ans = calc(nums, s, e, k);
        // for (int i = 0; i < ans.length; i++) {
        // System.out.println(ans[i]);
        // }
        return ans[ans.length - k];
    }

    // public int findKthLargest(int[] nums, int k) {
    // int n = nums.length;
    // int left = 0;
    // int right = n - 1;

    // Random rand = new Random(0);

    // while (left <= right) {
    // int choosenIndex = rand.nextInt(right - left + 1) + left;

    // int finalIndex = partition(nums, left, right, choosenIndex);
    // if (finalIndex == n - k) {
    // return nums[finalIndex];
    // } else if (finalIndex > n - k) {
    // right = finalIndex - 1;
    // } else {
    // left = finalIndex + 1;
    // }
    // }

    // return -1;
    // }

    // private int partition(int[] arr, int left, int right, int pivotIndex) {
    // int pivotValue = arr[pivotIndex];
    // int lesserIndex = left;
    // swap(arr, pivotIndex, right);

    // for (int i = left; i < right; i++) {
    // if (arr[i] < pivotValue) {
    // swap(arr, i, lesserIndex);
    // lesserIndex++;
    // }
    // }

    // swap(arr, right, lesserIndex);

    // return lesserIndex;
    // }

    // private void swap(int[] arr, int first, int second) {
    // int temp = arr[first];
    // arr[first] = arr[second];
    // arr[second] = temp;
    // }

    public static void main(String[] args) {
        int[] arr = {5, 8, 9, 7, 4, 1};
        int k = 2;
        Kth_Lagest_Element obj = new Kth_Lagest_Element();
        int element = obj.findKthLargest(arr, k);
        System.out.println(element);
    }
}
