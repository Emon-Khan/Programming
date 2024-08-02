from os import *
from sys import *
from collections import *
from math import *

from sys import stdin, setrecursionlimit
setrecursionlimit(10**7)


def maxSubarraySum(arr, n):
    max_sum = 0
    sum = 0
    for i in range(n):
        sum += arr[i]
        if (sum < 0):
            sum = 0
        max_sum = max(sum, max_sum)
    return max_sum


# arr = [10, 20, -30, 40, -50, 60]
# arr = [-10, -30, -50]
arr = [1, 2, 7, -4, 3, 2, -10, 9, 1]
n = len(arr)
ans = maxSubarraySum(arr, n)
print(ans)
