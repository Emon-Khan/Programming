def singleNonDuplicate(arr):
    start_point = 0
    end_point = len(arr)-1
    element = 0
    while start_point < end_point:
        if arr.count(arr[start_point]) == 1:
            element = arr[start_point]
        if arr.count(arr[end_point]) == 1:
            element = arr[end_point]
        start_point += 1
        end_point -= 1
    if start_point == end_point:
        if arr.count(arr[start_point]) == 1:
            element = arr[start_point]
    return element


arr = [1, 1, 3, 5, 5]
print(singleNonDuplicate(arr))
