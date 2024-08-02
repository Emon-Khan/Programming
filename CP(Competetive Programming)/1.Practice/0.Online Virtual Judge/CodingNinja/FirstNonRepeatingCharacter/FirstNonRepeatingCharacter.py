str = "AaaA"


def firstNonRepeatingCharacter(str):
    occurrence = {}
    char = str[0]
    for item in str:
        if item in occurrence:
            occurrence[item] += 1
        else:
            occurrence[item] = 1
    # print(occurrence)
    for item in str:
        if occurrence[item] == 1:
            char = item
            break
    return char


print(firstNonRepeatingCharacter(str))
