# Naive Approach -> Not AC
def subArrayCount(arr, k):
    subarray = []
    count = 0
    for i in range(len(arr)):
        for j in range(i+1, len(arr)+1):
            subarray.append(arr[i:j])

    sum_of_subarray = []
    array = []
    for i in range(len(subarray)):
        array = subarray[i]
        sum = 0
        for j in range(len(array)):
            sum += array[j]
        sum_of_subarray.append(sum)

    for i in range(len(sum_of_subarray)):
        if sum_of_subarray[i] % k == 0:
            count += 1

    return count


arr = [1, 4, 5, 2]
k = 3
ans = subArrayCount(arr, k)
print(ans)
