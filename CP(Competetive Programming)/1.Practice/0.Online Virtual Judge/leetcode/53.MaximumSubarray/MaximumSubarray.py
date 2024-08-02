from typing import List


class Solve:
    def maximumSubArray(self, nums: List[int]) -> int:
        max_sum = nums[0]
        sum = 0
        # prev_sum = sum
        for i in range(len(nums)):
            sum += nums[i]
            max_sum = max(max_sum, sum)
            if (sum < 0):
                sum = 0
                
        # max_sum = max(max_sum, sum)
        return max_sum


obj = Solve()
my_list = [-2]
ans = obj.maximumSubArray(my_list)
print(ans)
