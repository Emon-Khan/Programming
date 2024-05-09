from operator import index
from typing import List


class Solution:
    def subArraySum(self, nums: List[int], k: int) -> int:
        prefix_sum = 0
        count = 0
        dict = {}
        dict[prefix_sum] = 1
        for i in range(len(nums)):
            prefix_sum += nums[i]
            if dict.get(prefix_sum-k) is None:
                dict[prefix_sum] = dict.get(prefix_sum, 0) + 1
            else:
                count += dict[prefix_sum-k]
                dict[prefix_sum] = dict.get(prefix_sum, 0) + 1

        return count


obj = Solution()
my_list = [217, -315, -999, -537, 116, 46, 971, 31, -978, -796, -613]
ans = obj.subArraySum(my_list, -93)
print(ans)
