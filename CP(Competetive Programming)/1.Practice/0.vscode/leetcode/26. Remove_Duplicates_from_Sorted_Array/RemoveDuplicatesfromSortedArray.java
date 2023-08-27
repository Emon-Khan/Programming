import java.util.*;

class RemoveDuplicatesfromSortedArray {
    /*
     * public static void main(String[] args) {
     * ArrayList nums = new ArrayList();
     * Scanner scan = new Scanner(System.in);
     * int n;
     * n = scan.nextInt();
     * int num;
     * for (int i = 0; i < n; i++) {
     * num = scan.nextInt();
     * nums.add(num);
     * }
     * /*
     * for (int i = 0; i < n; i++) {
     * System.out.println(nums[i]);
     * }
     */
    /*
     * RemoveDuplicatesfromSortedArray obj = new RemoveDuplicatesfromSortedArray();
     * int result = obj.removeDuplicates(nums);
     * System.out.println(result);
     * for (int i = 0; i < nums.size(); i++) {
     * System.out.println(nums.get(i));
     * }
     * scan.close();
     * }
     * 
     * public int removeDuplicates(ArrayList nums) {
     * // Iterator<Integer> iterator = Arrays.stream(nums).iterator();
     * for (int i = 0; i < nums.size(); i++) {
     * for (int j = i + 1; j < nums.size(); j++) {
     * if (nums.get(i) == nums.get(j)) {
     * nums.remove(j);
     * } else {
     * break;
     * }
     * }
     * }
     * return nums.size();
     * }
     */
    public static void main(String[] args) {
        int[] nums = new int[20];
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        int num;
        for (int i = 0; i < n; i++) {
            num = scan.nextInt();
            nums[i] = num;
        }
        /*
         * for (int i = 0; i < n; i++) {
         * System.out.println(nums[i]);
         * }
         */
        RemoveDuplicatesfromSortedArray obj = new RemoveDuplicatesfromSortedArray();
        int result = obj.removeDuplicates(nums);
        System.out.println(result);
        /*for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }**/
        scan.close();
    }

    public int removeDuplicates(int[] nums) {
        List list = Arrays.asList(nums);
        for(List i: list)
        // Iterator<Integer> iterator = Arrays.stream(nums).iterator();
        for (int i = 0; i < list.size(); i++) {
            for (int j = i + 1; j < list.size(); j++) {
                if (list.get(i) == list.get(j)) {
                    list.remove(j);
                } else {
                    break;
                }
            }
        }
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
        return list.size();
    }
}