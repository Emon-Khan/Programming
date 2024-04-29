from os import *
from sys import *
from collections import *
from math import *

from typing import List


def insertionSort(n: int, arr: List[int]) -> None:
    for i in range(n):
        if (i != n-1):
            for j in range(i+1, 0, -1):
                if (arr[i] > arr[j]):
                    arr[i], arr[j] = arr[j], arr[i]
    print(arr)


arr = [1, 4, 2]
insertionSort(3, arr)
print(arr)
