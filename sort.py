


line = input().strip().split()
N = line[0]
C = line[1]

counts = {}
line = input().strip().split()
for i in range(len(line)):
    x = int(line[i])
    if x not in counts:
        counts[x] = [1, i]
    else:
        counts[x][0] += 1

sortedCounts = sorted(counts.items(), key=lambda x: (x[1][0], -x[1][1]))[::-1]

output = ""
for val, (count, _) in sortedCounts:

    output += ("{} ".format(val) * count)

print(output)
    
