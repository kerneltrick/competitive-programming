import sys

def possible(v, k, weights, values):

    if v == 0:
        return True
    elif v < 0 or k < 0:
        return False
    else:
        return possible(v-values[k], k-1, weights,values) or possible(v, k-1, weights, values) 

def solve(values, weights, C):
    
    n = len(weights)
    # what is the max value we can obtain from the first j items
    solutions = [[0 for j in range(n+1)] for i in range(C+1)]
    indicesUsed = [[[] for j in range(n+1)] for i in range(C+1)]
    

    maxVal = 0
    maxIndices = []

    for k in range(1, n+1):
        for x in range(1, C+1):
            if x - weights[k-1] >= 0:
                option1 = solutions[x-weights[k-1]][k-1] + values[k-1]
                option2 = solutions[x][k-1]
                solutions[x][k] = max(option1, option2)
                if option1 > option2:
                    indicesUsed[x][k] = indicesUsed[x-weights[k-1]][k-1] + [k-1]
                else:
                    indicesUsed[x][k] = indicesUsed[x][k-1] + [k-1]

                if solutions[x][k] > maxVal:
                    maxVal = solutions[x][k]
                    maxIndices = indicesUsed[x][k]

    return indicesUsed[x][k]

while True:

    # Check input for eof
    line = sys.stdin.readline().strip()
    if line == "":
        break

    # get knapsack capacity and number of objects
    line = line.split()
    C = int(line[0])
    n = int(line[1])

    weights = [0]*n
    values = [0]*n

    for i in range(n):
        line = input().strip().split()
        values[i] = int(line[0])
        weights[i] = int(line[1])

    solution = solve(values, weights, C)
    print(len(solution))
    
    indices = ""
    for i in solution:
        indices += str(i) + " " 

    print(indices)


        

    

