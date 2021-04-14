
n = int(input())

if n % 2 == 0: 
    total = 0.0
    for i in range(n//2):
        start = float(input())
        stop = float(input())
        total += (stop - start)
    print(int(total))
else:
    for i in range(n):
        throwAway = input()
    print("still running")

