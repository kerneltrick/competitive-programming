line = input().strip().split()

G = int(line[0])
T = int(line[1])
N = int(line[2])

totalWeightOfItems = 0

itemWeights = input().strip().split()

for item in itemWeights:

    totalWeightOfItems += int(item)

print(int(((G-T) * 0.90) - totalWeightOfItems))

