from os import *
from sys import *
from collections import *
from math import *


def subArrayCount(arr, k):
    count = 0
    prefix_sum = 0
    dict = {}
    dict[prefix_sum] = 1
    for i in range(len(arr)):
        prefix_sum += arr[i]
        remainder = prefix_sum % k
        if dict.get(remainder) is None:
            dict[remainder] = 1
        else:
            count += dict.get(remainder)
            dict[remainder] += 1
    return count


# arr = [5, 0, 2, 3, 1]
arr = [1, 4, 5, 2]
k = 3
print(subArrayCount(arr, k))
