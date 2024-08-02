def mergeSort(arr, n):
    divide(arr, 0, n-1)


def divide(arr, start_point, end_point):
    if (start_point < end_point):
        mid = start_point+int((end_point-start_point)/2)
        divide(arr, start_point, mid)
        divide(arr, mid+1, end_point)
        merge(arr, start_point, mid, end_point)


def merge(arr, start_point, mid, end_point):
    n1 = (mid-start_point)+1
    n2 = end_point-mid
    L = []
    R = []
    for i in range(n1):
        L.append(arr[start_point+i])
    for j in range(n2):
        R.append(arr[mid+1+j])
    i = 0
    j = 0
    k = start_point
    while (i < n1 and j < n2):
        if (L[i] <= R[j]):
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    while (i < n1):
        arr[k] = L[i]
        i += 1
        k += 1
    while (j < n2):
        arr[k] = R[j]
        j += 1
        k += 1


arr = [8, 4, 3, 6]
n = len(arr)
mergeSort(arr, n)
