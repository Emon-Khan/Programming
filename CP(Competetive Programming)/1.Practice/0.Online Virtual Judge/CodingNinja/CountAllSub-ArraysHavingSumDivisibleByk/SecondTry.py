def subArrayCount(arr, k):
    dict={}
    prefixSum=0
    dict[prefixSum]=1
    count = 0
    for i in range(len(arr)):
        prefixSum += arr[i]
        # version 1
        # Surplus Of 2 is used here
        # Another Term is Deficiency of 3
        # divisableValue= int(prefixSum/k)*k
        # if prefixSum-divisableValue in dict:
        #     count+=dict.get(prefixSum-divisableValue)
        # if k != divisableValue:
        #     if prefixSum-k in dict:
        #         count+=dict.get(prefixSum-k)
        # if prefixSum in dict:
        #     count +=dict.get(prefixSum)
        # version 2
        # if prefixSum%k in dict:
        #     count += dict.get(prefixSum%k)
        #     dict[prefixSum%k]+=1
        # if dict.get(prefixSum) is None:
        #     dict[prefixSum] = 1
        # else:
        #     dict[prefixSum]+=1
        if dict.get(prefixSum%k) is None:
            dict[prefixSum%k]=1
        else:
            count+=dict.get(prefixSum%k)
            dict[prefixSum%k]+=1
    return count
# arr = [1, 4, 5, 2] #1 5 10 12
# arr = [5, 0, 2, 3, 1] #5 5 7 10 11
# arr = [2, 3, 1]
# arr = [1, 2, 3, 4]
arr = [-5, -4, -5, -10, 8, -7 ]
# arr = [5, 4, 5, 10, 8, 7 ]
k=5
ans = subArrayCount(arr, k)
print(ans)