import io


numOne = input()
numTwo = input()

a = 0
for c in numOne:
    if c == "S":
        a += 1
    elif c == ")":
        break

b = 0
for c in numTwo:
    if c == "S":
        b += 1
    elif c == ")":
        break

answer = a * b

if answer == 0:
    print(0)
else:
    out = ("S("*answer) + "0" + (")"*answer)
    print(out)

