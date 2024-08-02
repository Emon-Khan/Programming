import itertools
from typing import List


class Solution:
    def maxDigit(self, val: int) -> int:
        highest = 0
        while val:
            highest = max(highest, val % 10)
            val //= 10
        return highest

    def maxSum(self, nums: List[int]) -> int:
        sum = -1
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if self.maxDigit(nums[i]) == self.maxDigit(nums[j]):
                    sum = max(sum, nums[i]+nums[j])
        return sum


nums = [84, 91, 18, 59, 27, 9, 81, 33, 17, 58]
# nums = [1, 2, 3, 4]
# nums = [8, 75, 28, 35, 21, 13, 21]
obj = Solution()
ans = obj.maxSum(nums)
print(ans)
