def subArrayCount(arr, k):
    count = [0]*k
    prefix_sum = 0
    for val in arr:
        prefix_sum += val
        count[prefix_sum % k] += 1
    result = count[0]
    for i in count:
        result += int((i*(i-1))/2)
    return result


arr = [5, 0, 2, 3, 1]
k = 5
print(subArrayCount(arr, k))
