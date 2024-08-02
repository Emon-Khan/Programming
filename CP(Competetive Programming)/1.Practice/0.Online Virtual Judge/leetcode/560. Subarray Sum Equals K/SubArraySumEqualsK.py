from operator import index
from typing import List


class Solution:
    def subArraySum(self, nums: List[int], k: int) -> int:
        prefix_sum = {}
        count = 0
        sum = 0
        prefix_sum[0]=1
        for i in range(len(nums)):
            sum+=nums[i]
            if sum-k in prefix_sum:
                count += prefix_sum[sum-k]
                prefix_sum[sum] = prefix_sum.get(sum, 0)+1
            else:
                prefix_sum[sum] = prefix_sum.get(sum, 0)+1
        return count

obj = Solution()
my_list = [1,1,1]
ans = obj.subArraySum(my_list, 2)
print(ans)
