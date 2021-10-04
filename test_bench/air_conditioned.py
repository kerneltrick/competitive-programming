numMinions = int(input())

minionTemps = {} 
minTemp = None
maxTemp = None

for i in range(numMinions):

    tempRange = tuple([int(x) for x in input().split(" ")])
    L, U = tempRange
    minionTemps[i] = tempRange

    if minTemp is None or L < minTemp:
        minTemp = L

    if maxTemp is None or U < maxTemp:
        maxTemp = U

for temp in range(len(minionTemps)):

    for i in range(numMinions):

        if minionTemps[i] is not None:
            L, U = minionTemps[i]
            if L <= temp and U >= temp:
                minionTemps[i] = None


        







