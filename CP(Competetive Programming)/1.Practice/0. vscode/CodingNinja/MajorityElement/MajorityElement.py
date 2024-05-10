from math import *
from collections import *
from sys import *
from os import *


def findMajorityElement(arr, n):
    dict = {}
    element = -1
    threshold = floor(n/2)
    for i in range(n):
        dict[arr[i]] = dict.get(arr[i], 0)+1
        if dict[arr[i]] > threshold:
            element = arr[i]
    return element


arr = [2, 3, 3, 2]
n = len(arr)
print(findMajorityElement(arr, n))
