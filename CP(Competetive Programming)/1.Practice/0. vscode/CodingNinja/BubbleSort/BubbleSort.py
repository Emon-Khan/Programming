from os import *
from sys import *
from collections import *
from math import *


def bubbleSort(arr, n):
    for i in range(n-1):
        while arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
            if i != 0:
                i -= 1


# arr = [6, 2, 8, 4, 10]
# arr = [4, 3, 2, 1]
arr = [4, 3, 2, 6, 4, 1]
n = len(arr)
bubbleSort(arr, n)
print(arr)
