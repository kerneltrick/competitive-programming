from functools import cmp_to_key

# Comparison function for list ordering
def order(left, right):

    L1, U1 = left
    L2, U2 = right 

    if U1 == U2:
        return L1 - L2
    return U1 - U2

# Read number of minions
numMinions = int(input())

# Read in ranges
minionTempRanges = []
for i in range(numMinions):

    tempRange = tuple([int(x) for x in input().split(" ")])
    L, U = tempRange
    minionTempRanges.append(tempRange)

# Sort temp ranges
minionTempRanges.sort(key = cmp_to_key(order))
roomTemp = minionTempRanges[0][-1]
print(minionTempRanges)

# Count rooms needed
numRooms = 1
for L, U in minionTempRanges:

    if roomTemp < L:
        roomTemp = U
        numRooms += 1

# Output
print(numRooms)
