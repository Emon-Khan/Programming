import java.util.Scanner;

public class Search_Insert_Position {
    public static void main(String[] args) {
        int[] nums = { 1, 3, 5, 6 };
        Scanner scan = new Scanner(System.in);
        int target = scan.nextInt(); // 5 2 7
        Search_Insert_Position obj = new Search_Insert_Position();
        int ans = obj.searchInsert(nums, target);
        System.out.println(ans);
        scan.close();
    }

    public int searchInsert(int[] nums, int target) {
        int numsLength = nums.length;
        int hi = numsLength - 1, li = 0, mi;
        while (li <= hi) {
            mi = li + (hi - li) / 2;
            if (target == nums[mi]) {
                return mi;
            }
            if (target < nums[mi]) {
                hi = mi - 1;
            } else {
                li = mi + 1;
            }
        }

        return li;
    }
}
