def aggressiveCow(stalls, k):
    stalls.sort()
    size = len(stalls)
    low = 1
    high = stalls[size-1]-stalls[0]
    distance = 1
    while (low <= high):
        mid = int((low+high)/2)
        if (isPossible(stalls, mid, k)):
            distance = mid
            low = mid+1
        else:
            high = mid-1
    return distance


def isPossible(stalls, mid, k):
    cows = 1
    current_position = stalls[0]
    for i in range(1, len(stalls)):
        if stalls[i]-current_position >= mid:
            cows += 1
            current_position = stalls[i]
            if cows >= k:
                return True
    return False


t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    stalls = []
    for j in range(n):
        stalls.append(int(input()))
    print(aggressiveCow(stalls, k))
