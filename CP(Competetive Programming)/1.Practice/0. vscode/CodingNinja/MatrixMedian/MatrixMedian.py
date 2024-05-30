def getMedian(matrix):
    length = len(matrix)
    inner_length = len(matrix[0])
    x = []
    for i in range(length):
        for j in range(inner_length):
            x.append(matrix[i][j])
    x.sort()
    index = int(len(x)/2)
    # i = floor(index/)
    # print(index)
    return x[index]


matrix = [[1, 2, 6, 6, 10], [2, 4, 4, 5, 7], [2, 5, 5, 6, 6]]
print(getMedian(matrix))
