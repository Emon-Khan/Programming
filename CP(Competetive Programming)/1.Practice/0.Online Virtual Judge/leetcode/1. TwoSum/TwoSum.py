from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = []
        value_index = {}
        # nums.sort()
        for index in range(len(nums)):
            value_index[nums[index]] = index
        # for key, val in value_index.items():
        #     print(key, " ", val)
        for index in range(len(nums)):
            if target - nums[index] in nums and index < nums.index(target - nums[index]):
                ans.append(index)
                ans.append(nums.index(target - nums[index]))
            elif nums.count(nums[index]) > 1 and not ans and target - nums[index] in nums:
                ans.append(index)
                ans.append(value_index[nums[index]])
        return ans


arr = [3, 2, 3]
target = 6
obj = Solution()
ans = obj.twoSum(arr, target)
print(ans)
