from typing import List


class Solve:
    def maximumSubArray(self, nums: List[int]) -> int:
        prefix_sum = 0
        max_prefix_sum = nums[0]
        for i in range(len(nums)):
            prefix_sum += nums[i]
            max_prefix_sum = max(prefix_sum, max_prefix_sum)
            if prefix_sum < 0:
                prefix_sum = 0
        return max_prefix_sum


obj = Solve()
my_list = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
ans = obj.maximumSubArray(my_list)
print(ans)
