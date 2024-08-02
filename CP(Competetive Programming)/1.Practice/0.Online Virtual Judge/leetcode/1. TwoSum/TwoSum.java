
class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        for(int i = 0; i<nums.length; i++){
            for(int j = i+1; j<nums.length; j++){
                if(nums[i]+nums[j]==target){
                   return new int[]{i,j};
                }
            }
        }
        return nums;
    }

    public static void main(String[] args){
        int[] ar = {3, 2, 4};
        int target = 6;
        TwoSum obj = new TwoSum();
        int[] a = obj.twoSum(ar, target);
        for(int i = 0; i<a.length; i++){
            System.out.println(a[i]);
        }
        //System.out.println();
    }
}