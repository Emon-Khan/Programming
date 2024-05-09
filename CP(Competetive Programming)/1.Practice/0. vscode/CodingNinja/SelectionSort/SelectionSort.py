from os import *
from sys import *
from collections import *
from math import *


def selectionSort(arr, n):

    for i in range(n):
        min_index = i
        for j in range(i+1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        if i != min_index:
            arr[i], arr[min_index] = arr[min_index], arr[i]


# arr = [29, 72, 98, 13, 87, 66, 52, 51, 36]
arr = [5, 31, 26, 40, 44, 26, 48]
n = len(arr)
selectionSort(arr, n)
print(arr)
