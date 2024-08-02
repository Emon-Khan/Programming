def pairSum(arr, n, target):
    count = 0
    start = 0
    end = n-1
    return recursion(arr, start, end, count, target)


def recursion(arr, start, end, count, target):
    if start < end:
        if arr[start]+arr[end] == target:
            count += 1
            count = max(count, recursion(arr, start+1, end, count, target))
        elif arr[start] + arr[end] > target:
            count = max(count, recursion(arr, start, end-1, count, target))
        else:
            count = max(count, recursion(arr, start+1, end, count, target))
    if count == 0:
        count = -1
    return count


arr = [1, 2, 3, 4, 5]
# arr = [1, 2, 3, 4, 5, 6]
# arr = [1, 3, 5, 6]
# arr = [1, 3, 6, 9, 11]
# arr = [1, 2, 3, 4, 5, 6, 7]
# arr = [1, 2, 3, 4, 5, 6, 7, 8]
target = 6
n = 5
ans = pairSum(arr, n, target)
print(ans)
