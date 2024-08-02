def separateNegativeAndPositive(nums):
    return quickSort(nums, 0, len(nums)-1)


def quickSort(nums, start_index, end_index):
    if start_index < end_index:
        position = partition(nums, start_index, end_index)
        quickSort(nums, position+1, end_index)
        quickSort(nums, start_index, position-1)
    return nums


def partition(nums, start_index, end_index):
    pivot = nums[end_index]
    point = start_index-1
    for index in range(start_index, end_index):
        if nums[index] < pivot:
            point += 1
            if point != index:
                nums[point], nums[index] = nums[index], nums[point]
    nums[point+1], nums[end_index] = nums[end_index], nums[point+1]
    return point+1


nums = [90, 15, 23, 117, 87, 6, 10]
list_ans = separateNegativeAndPositive(nums)
print(list_ans)
