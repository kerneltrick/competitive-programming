
import io

boardSize = 4

def collapse(row):
    print(row)

    for i in range(boardSize - 1):
        if row[i] == 0:
            for ii in range(i, boardSize - 1):
                row[ii] = row[ii+1]
            row[-1] = 0
        elif row[i+1] == row[i]:
            row[i] *= 2
            for ii in range(i, boardSize - 1):
                row[ii] = row[ii+1]
            row[-1] = 0
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
    for i in range(boardSize):
        finalBoard.append(collapse(origBoard[:][i]))
#right
elif move == 2:
    for row in origBoard:
        finalBoard.append(collapse(row[::-1]))
#down
elif move == 3:
    for i in range(boardSize):
        finalBoard.append(collapse([x[i] for x in origBoard[::-1]]))
print('final product')
for row in finalBoard:
    print(row)
