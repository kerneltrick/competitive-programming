import io

line = input()

count = 0
for c in line:
    if(c == "e"):
        count += 1

output = "h" + ("e" * (count * 2)) + "y"

print(output)
