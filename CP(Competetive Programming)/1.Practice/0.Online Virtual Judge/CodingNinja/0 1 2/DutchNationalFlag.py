from os import *
from sys import *
from collections import *
from math import *

from sys import stdin, setrecursionlimit
setrecursionlimit(10**7)


def sort012(arr, n):
    dict = {}
    for i in range(n):
        dict[arr[i]] = dict.get(arr[i], 0)+1
        if (arr[i] == 0):
            previous_val = arr[(dict.get(0)-1)]
            arr[dict.get(0)-1] = 0
            if (previous_val == 1):
                # previous_val = arr[(dict.get(0)-1)+dict.get(1)]
                arr[(dict.get(0)-1)+dict.get(1)] = 1
            elif (previous_val == 2):
                # previous_val = arr[(dict.get(0)-1)+dict.get(1)+dict.get(2)]
                arr[(dict.get(0)-1)+dict.get(1)+dict.get(2)] = 2
            arr[i] = previous_val

        elif (arr[i] == 1):
            previous_val = arr[(dict.get(0)-1)+dict.get(1)]
            arr[(dict.get(0)-1)+dict.get(1)] = 1
            if (previous_val == 0):
                # previous_val = arr[(dict.get(0)-1)]
                arr[dict.get(0)-1] = 0
            elif (previous_val == 2):
                # previous_val = arr[(dict.get(0)-1)+dict.get(1)+dict.get(2)]
                arr[(dict.get(0)-1)+dict.get(1)+dict.get(2)] = 2
            arr[i] = previous_val
        elif (arr[i] == 2):
            previous_val = arr[(dict.get(0)-1)+dict.get(1)+dict.get(2)]
            arr[(dict.get(0)-1)+dict.get(1)+dict.get(2)] = 2
            if (previous_val == 0):
                # previous_val = arr[(dict.get(0)-1)]
                arr[dict.get(0)-1] = 0
            elif (previous_val == 1):
                # previous_val = arr[(dict.get(0)-1)+dict.get(1)]
                arr[(dict.get(0)-1)+dict.get(1)] = 1
            arr[i] = previous_val

    # taking inpit using fast I/O


def takeInput():
    n = int(input().strip())

    if n == 0:
        return list(), 0

    arr = list(map(int, stdin.readline().strip().split(" ")))

    return arr, n


def printAnswer(arr, n):

    for i in range(n):

        print(arr[i], end=" ")

    print()

# main


t = int(input().strip())
for i in range(t):

    arr, n = takeInput()
    sort012(arr, n)
    printAnswer(arr, n)
