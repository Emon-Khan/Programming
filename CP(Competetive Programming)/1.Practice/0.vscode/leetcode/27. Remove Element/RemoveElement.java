import java.util.Scanner;

class RemoveElement {
    public static void main(String args[]) {
        int no,sz;
        Scanner sc = new Scanner(System.in);
        sz = sc.nextInt();
        int[] nums = new int[sz];
        for (int i = 0; i < sz; i++) {
            no = sc.nextInt();
            nums[i] = no;
        }
        int val = sc.nextInt();
        RemoveElement obj = new RemoveElement();
        int ans = obj.removeElement(nums, val);
        System.out.println(" Length "+ans);
        for (int i = 0; i < sz; i++) {
            System.out.print(nums[i] + " ");
        }
        sc.close();
    }

    public int removeElement(int[] nums, int val) {

        int len = nums.length;
        int newLen = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] != val) {
                nums[newLen]=nums[i];
                newLen++;
            }
        }
        return newLen;

    }
}
