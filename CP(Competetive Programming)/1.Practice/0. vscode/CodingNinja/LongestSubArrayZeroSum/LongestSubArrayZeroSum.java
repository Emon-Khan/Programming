import java.util.ArrayList;
import java.util.Arrays;

class LongestSubArrayZeroSum {
    public static int LongestSubsetWithZeroSum(ArrayList<Integer> arr) {
        int length = 0;
        for (int i = 0; i < arr.size(); i++) {
            int prefixSum = 0;
            for (int j = i; j < arr.size(); j++) {
                prefixSum += arr.get(j);
                if (prefixSum == 0) {
                    length = Math.max(length, j - i + 1);
                }
            }
        }
        return length;

    }

    public static void main(String[] args) {
        // ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1, 3, -1, 4, -4));
        // ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1, -1, 2, -2));
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(22, -22, 35, 76, 87, -24, 0, 0, 24, 1, 0, 0));
        int length = LongestSubsetWithZeroSum(arr);
        System.out.println(length);
    }
}