from typing import List


class Solution:
    def maxArea(self, height: List[int]) -> int:
        area = self.findArea(height, 0, len(height)-1, 0)
        return area

    def findArea(self, height: List[int], start_point: int, end_point: int, area: int) -> int:
        if start_point < end_point:
            area = max(area, ((end_point-start_point) *
                       min(height[start_point], height[end_point])))
            if (height[start_point] > height[end_point]):
                area = max(area, self.findArea(
                    height, start_point, end_point-1, area))
            else:
                area = max(area, self.findArea(
                    height, start_point+1, end_point, area))
        return area


height = [1, 2, 3]
obj = Solution()
ans = obj.maxArea(height)
print(ans)
