def maxArea(height):
    area = 0
    ans = calculation(height, 1, len(height), area)
    return ans


def calculation(height, start_point, end_point, area):
    if (end_point > start_point):
        area = max(area, ((end_point-start_point) *
                   min(height[start_point-1], height[end_point-1])))
        if height[start_point-1] > height[end_point-1]:
            area = max(area, calculation(
                height, start_point, end_point-1, area))
        else:
            area = max(area, calculation(
                height, start_point+1, end_point, area))
    return area


height = [1, 2, 3]
ans = maxArea(height)
print(ans)
