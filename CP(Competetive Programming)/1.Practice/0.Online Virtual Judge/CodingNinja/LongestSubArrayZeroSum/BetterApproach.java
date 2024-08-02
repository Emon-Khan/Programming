import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

public class BetterApproach {
    public static int LongestSubsetWithZeroSum(ArrayList<Integer> arr) {
        int prefixSum = 0;
        int length = 0;
        HashMap<Integer, Integer> hMap = new HashMap<Integer, Integer>();
        for (int i = 0; i < arr.size(); i++) {
            prefixSum += arr.get(i);
            if (prefixSum == 0) {
                length = Math.max(length, i + 1);
            }
            if (hMap.containsKey(prefixSum)) {
                length = Math.max(length, i - hMap.get(prefixSum));
            } else {
                hMap.put(prefixSum, i);
            }
        }
        return length;

    }

    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1, 3, -1, 4, -4));
        // ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(1, -1, 2, -2));
        // ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(22, -22, 35, 76, 87,
        // -24, 0, 0, 24, 1, 0, 0));
        // ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(0));
        int length = LongestSubsetWithZeroSum(arr);
        System.out.println(length);
    }

}
