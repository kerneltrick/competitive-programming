
keyToFinger = { "a": [2,3],
                "b": [2],
                "c": [2,3,4,7,8,9,10],
                "d": [2,3,4,7,8,9],
                "e": [2,3,4,7,8],
                "f": [2,3,4,7],
                "g": [2,3,4],
                "A": [1,2,3],
                "B": [1,2],
                "C": [3],
                "D": [1,2,3,4,7,8,9],
                "E": [1,2,3,4,7,8],
                "F": [1,2,3,4,7],
                "G": [1,2,3,4],
        }

t = int(input())

for i in range(t):
    song = input()
    fingers = [0]*10
    prev = [0]*10
    for i in range(len(song)):
        next = [0]*10
        note = song[i]
        for fin in keyToFinger[note]:
            if prev[fin-1] == 0:
                fingers[fin-1]+=1
            next[fin-1] = 1
        prev = next


    out = ""
    for fin in fingers:
        out += (str(fin) + " ")
    print(out)
