def find_subarrays(arr):
    prefix_sum = []
    count = 0
    sum = 0
    for i in range(len(arr)):
        sum+=arr[i]
        prefix_sum.append(sum)
    for i in range(len(prefix_sum)):
        if prefix_sum[i]==0 and count<i+1:
            count = i+1
        for j in range(len(prefix_sum)-1, i, -1):
            if prefix_sum[i]==0:
                break
            elif prefix_sum[j]==prefix_sum[i] and count<j-i:
                count = j-i
        # if prefix_sum[i]==0:
        #     count = i+1
    return count
arr = [0, 0, 0, 0, 0]
size = find_subarrays(arr)
print(size)