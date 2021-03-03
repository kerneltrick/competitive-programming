import sys
import os

str = input()

counters = {}

total = len(str)
for i in range(len(str)):
    letter = str[i]
    if(letter not in counters):
        counters[letter] = 1
    else:
        counters[letter] += 1

list_of_counts = list(counters.values())
list_of_counts.sort(reverse=True)

need_to_delete = 0
for x in list_of_counts[2:]:
    need_to_delete+=x
print(need_to_delete)

