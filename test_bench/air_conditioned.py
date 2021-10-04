numMinions = int(input())

minionTempRanges = {} 
tempCounts = {}

for i in range(numMinions):

    tempRange = tuple([int(x) for x in input().split(" ")])
    L, U = tempRange
    minionTempRanges[i] = tempRange

    for j in range(L, U+1):

        if j not in tempCounts:
            tempCounts[j] = 1
        else:
            tempCounts[j] += 1

numRooms = 0

while numMinions > 0:

    numRooms += 1

    tempCountsPriority = [key for key, value in sorted(tempCounts.items(), key = lambda x:x[1], reverse=True)]
    room = tempCountsPriority[0]

    print(tempCounts)
    print(minionTempRanges)
    print(room)

    for i, tempRange in minionTempRanges.items():

        if tempRange is None:
            continue

        L, U = tempRange

        if room >= L and room <= U:
            minionTempRanges[i] = None
            for j in range(L, U+1):
                tempCounts[j] -= 1
            numMinions -= 1

print(tempCounts)
print(numRooms)
