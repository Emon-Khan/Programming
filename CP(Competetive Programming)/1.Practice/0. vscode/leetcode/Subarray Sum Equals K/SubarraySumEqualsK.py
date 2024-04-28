def subArrayCount(arr, k):
    dict={}
    prefixSum=0
    dict[prefixSum]=1
    count = 0
    for i in range(len(arr)):
        prefixSum += arr[i]
        if prefixSum-k in dict:
            count+=dict.get(prefixSum-k)
        if dict.get(prefixSum) is None:
            dict[prefixSum] = 1
        else:
            dict[prefixSum] += 1
    return count
arr = [1, 2, 3, -3] #1, 1, 1, 4, 2, -3
k=3
ans = subArrayCount(arr, k)
print(ans)