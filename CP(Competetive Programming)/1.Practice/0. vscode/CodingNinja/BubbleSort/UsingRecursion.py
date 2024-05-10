from os import *
from sys import *
from collections import *
from math import *


def bubbleSort(arr, n):
    for i in range(n-1):
        sort(arr, i)


def sort(arr, i):
    while arr[i] > arr[i+1] and i >= 0:
        arr[i], arr[i+1] = arr[i+1], arr[i]
        sort(arr, i-1)


arr = [6, 2, 8, 4, 10]
n = len(arr)
bubbleSort(arr, n)
print(arr)
