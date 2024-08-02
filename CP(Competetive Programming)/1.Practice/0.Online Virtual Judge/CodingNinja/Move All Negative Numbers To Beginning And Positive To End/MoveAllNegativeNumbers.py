nums = [1, -4, -2, 5, 3]


def separateNegativeAndPositive(nums):
    value = nums[0]
    for j in range(1, len(nums)):
        if nums[j] < value and 0 <= value:
            value = nums[j]
    return quickSort(nums, 0, len(nums)-1, pivot)


def quickSort(nums, startIndex, endIndex):
    if startIndex < endIndex:
        position = partition(nums, startIndex, endIndex)
        quickSort(nums, startIndex, position-1)
        quickSort(nums, position+1, endIndex)
    return nums


def partition(nums, startIndex, endIndex):
    pivot = nums[endIndex]
    i = startIndex-1
    for j in range(startIndex, endIndex):
        if nums[j] < pivot:
            i += 1
            nums[i], nums[j] = nums[j], nums[i]
    nums[i+1], nums[endIndex] = nums[endIndex], nums[i+1]
    return i+1


ans = separateNegativeAndPositive(nums)
print(ans)
