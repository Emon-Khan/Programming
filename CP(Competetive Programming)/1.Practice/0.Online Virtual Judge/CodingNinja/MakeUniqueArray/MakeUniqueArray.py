arr = [3, 12, 7, 12, 13]


def minElementsToRemove(arr):
    occurrence = {}
    for item in arr:
        if item in occurrence:
            occurrence[item] += 1
        else:
            occurrence[item] = 1
    return len(arr) - len(occurrence)


print(minElementsToRemove(arr))