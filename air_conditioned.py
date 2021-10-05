from functools import cmp_to_key

def order(left, right):

    L1, U1 = left
    L2, U2 = right 

    if U1 == U2:
        return L1 - L2
    return U1 - U2


numMinions = int(input())

minionTempRanges = []

for i in range(numMinions):

    tempRange = tuple([int(x) for x in input().split(" ")])
    L, U = tempRange
    minionTempRanges.append(tempRange)

numRooms = 1

minionTempRanges.sort(key = cmp_to_key(order))
roomTemp = minionTempRanges[0][-1]

for L, U in minionTempRanges:

    if roomTemp < L:
        roomTemp = U
        numRooms += 1

print(numRooms)
