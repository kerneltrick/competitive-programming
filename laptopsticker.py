
line = input()

words = line.strip().split()

wc = int(words[0])
hc = int(words[1])
ws = int(words[2])
hs = int(words[3])

if (wc - ws >= 2) and (hc - hs >= 2):
    print(1)
else:
    print(0)

