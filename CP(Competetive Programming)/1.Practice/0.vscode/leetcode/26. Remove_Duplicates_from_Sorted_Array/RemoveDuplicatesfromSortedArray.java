import java.util.*;

class RemoveDuplicatesfromSortedArray {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        int[] nums = new int[n];
        int num;
        for (int i = 0; i < n; i++) {
            num = scan.nextInt();
            nums[i] = num;
        }

        RemoveDuplicatesfromSortedArray obj = new RemoveDuplicatesfromSortedArray();
        int result = obj.removeDuplicates(nums);
        System.out.print(result);
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }

        scan.close();
    }

    public int removeDuplicates(int[] nums) {
        int j = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }

}