def subArrayCount(arr, k):
    counts = [0]*k
    prefixSum = 0
    for value in arr:
        prefixSum += value % k
        counts[prefixSum % k] += 1
    result = counts[0]
    for value in counts:
        result += int((value*(value-1))/2)  # valueC2 (Combination Formula)
    return result


# arr = [5, 0,-5, 7, 3, 1]
arr = [5, 0, 2, 3, 1]
k = 5
ans = subArrayCount(arr, k)
print(ans)
