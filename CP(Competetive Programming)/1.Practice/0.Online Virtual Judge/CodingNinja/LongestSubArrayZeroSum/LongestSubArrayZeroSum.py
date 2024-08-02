def find_subarrays(arr):
    maxLen = 0
    dict = {}
    currSum = 0
    for i in range(len(arr)):
        currSum+=arr[i]
        if(currSum==0):
            maxLen = i+1
        else:
            if dict.get(currSum) is None:
                dict[currSum] = i
            else:
                maxLen = max(maxLen, i-dict.get(currSum))
    return maxLen
arr = [1, 2, 1, -2, 1, 3, 2, -5]
ans = find_subarrays(arr)
print(ans)
