def aggressiveCows(stalls, k):
    stalls.sort()
    size = len(stalls)
    low = 1
    high = stalls[size-1]-stalls[0]
    distance = 1
    while (low <= high):
        mid = int((low+high)/2)
        if (isPossible(stalls, k, mid)):
            distance = mid
            low = mid+1
            # print("Current distance: if ", distance)
        else:
            high = mid-1
        # print("Current distance:", distance)
    return distance


def isPossible(stalls, k, mid):
    cows = 1
    last_position = stalls[0]
    for i in range(1, len(stalls)):
        if (stalls[i]-last_position >= mid):
            cows += 1
            last_position = stalls[i]
            if cows >= k:
                return True
    return False


# stalls = [1, 2, 4, 8, 9]

stalls = [0, 3, 4, 7, 10, 9]
k = 4
print(aggressiveCows(stalls, k))
