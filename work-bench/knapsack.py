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
    #solutions = [[0 for j in range(n+1)] for i in range(C+1)]
    #indicesUsed = [[[] for j in range(n+1)] for i in range(C+1)]
    solutions = {0:{}}
    for j in range(n):
        solutions[0][j] = 0
    indicesUsed = {} 
    
    maxVal = 0
    maxIndices = []

    for k in range(1, n+1):
        for w in range(1, C+1):
            if w not in solutions:
                solutions[w] = {}
            if w - weights[k-1] >= 0:
                if w - weights[k-1] not in solutions:
                    solutions[w-weights[k-1]] = {}
                if k-1 not in solutions[w-weights[k-1]]:
                    solutions[w-weights[k-1]][k-1] = 0 
                if k-1 not in solutions[w]:
                    solutions[w][k-1] = 0 

                option1 = solutions[w-weights[k-1]][k-1] + values[k-1]
                option2 = solutions[w][k-1]
                solutions[w][k] = max(option1, option2)

                if w not in indicesUsed: 
                    indicesUsed[w] = {} 

                if option1 > option2:
                    if w-weights[k-1] not in indicesUsed:
                        indicesUsed[w-weights[k-1]] = {} 
                    if k-1 not in indicesUsed[w-weights[k-1]]:
                            indicesUsed[w-weights[k-1]][k-1] = []
                    indicesUsed[w][k] = indicesUsed[w-weights[k-1]][k-1] + [k-1]
                else:
                    indicesUsed[w][k] = indicesUsed[w][k-1]

                if solutions[w][k] > maxVal:
                    maxVal = solutions[w][k]
                    maxIndices = indicesUsed[w][k]

    return maxIndices

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
