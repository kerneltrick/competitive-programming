
import io

boardSize = 4

def fill_in_empty_space(row):
    newRow = []
    for item in row:
        if item != 0:
            newRow.append(item)
    while(len(newRow) < boardSize):
        newRow.append(0)

    return newRow

def collapse(row):

    for i in range(boardSize - 1):
        row = fill_in_empty_space(row)
        if(row[i] == row[i+1]):
            row[i] *= 2
            row[i+1] = 0
            
    return row

origBoard = []
for i in range(boardSize):
    line = input()
    row = list(map(int, line.split(' ')))
    origBoard.append(row)

move = int(input())
finalBoard = []
#left
if move == 0:
    for row in origBoard:
        finalBoard.append(collapse(row))
#up
elif move == 1:
    intermediateBoard = []
    for i in range(boardSize):
        row = []
        for x in range(boardSize): 
            row.append(origBoard[x][i])
        intermediateBoard.append(collapse(row))
    for i in range(boardSize):
        row = []
        for x in range(boardSize):
            row.append(intermediateBoard[x][i])
        finalBoard.append(row)

#right
elif move == 2:
    for row in origBoard:
        finalBoard.append(collapse(row[::-1])[::-1])
#down
elif move == 3:
    intermediateBoard = []
    for i in range(boardSize):
        intermediateBoard.append(collapse([x[i] for x in origBoard[::-1]]))
    
    for i in range(boardSize-1, -1, -1):
        finalBoard.append([x[i] for x in intermediateBoard])



for row in finalBoard:
    print(row[0], row[1], row[2], row[3])
