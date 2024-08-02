public class NonDecreasingArray {
    public static void main(String[] args) {
        int[] nums = { 3, 4, 2, 3 };
        boolean ans = checkPossibility(nums);
        System.out.println(ans);
    }

    public static boolean checkPossibility(int[] nums) {
        return temp(nums);
    }

    /*
     * public static int check(int[] nums, int start, int end) {
     * int flag;
     * for (int i = start - 1; 1 < i; i--) {
     * flag = 1;
     * if (nums[i] > nums[i - 1]) {
     * continue;
     * } else {
     * flag = 0;
     * flag = check(nums, i, 0);
     * break;
     * }
     * }
     * return flag;
     * }
     */

    public static boolean temp(int[] nums) {
        boolean flag = false;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                flag = true;
                continue;
            } else {
                flag = false;
            }
        }
        return flag;
    }

}