import io

line = input()

count = 0

for i in range(len(line)):
    if line[i] == ';':
        count += 1
    elif line[i] == '-':
        back = ""
        j = i-1
        while j >= 0 and line[j]!=';':
            back = line[j] + back
            j -= 1
        forward = ""
        j = i+1
        while j < len(line) and line[j]!=';':
            forward += line[j]
            j += 1
        count += int(forward) - int(back)
    
count += 1

print(count)
