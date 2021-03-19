

inf = float("inf")
n = int(input())
numLine = []

for i in range(n):
    numLine.append(int(input()))

numLine.sort()

halfwayPoint = ( numLine[0] + numLine[-1] )/2
minimum = inf 
midIdx = 0
for i in range(len(numLine)):
    dist = abs(numLine[i]-halfwayPoint)
    if(dist < minimum):
        midIdx = i
        minimum = dist
firstHalf = numLine[:i+1]
secondHalf = numLine[i:]
print(firstHalf)
print(secondHalf)

totalEnergy = 0

midPoint = (firstHalf[0] + firstHalf[-1])/2
closestToMid = 0
minimum = inf
for num in firstHalf:
    dist = abs(num-midPoint)
    if(dist < minimum):
        closestToMid = num
        minimum = dist
for num in firstHalf:
    totalEnergy += (num-closestToMid)*(num-closestToMid)

midPoint = (secondHalf[0] + secondHalf[-1])/2
closestToMid = 0
minimum = inf
for num in secondHalf:
    dist = abs(num-midPoint)
    if(dist < minimum):
        closestToMid = num
        minimum = dist
for num in secondHalf:
    totalEnergy += (num-closestToMid)*(num-closestToMid)

print(totalEnergy)
