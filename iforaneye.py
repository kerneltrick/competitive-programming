import re
import collections
import io



vocabulary = collections.OrderedDict()
vocabulary['and'] = '&'
vocabulary['are'] = 'r'
vocabulary['at'] = '@'
vocabulary['bea'] = 'b'
vocabulary['bee'] = 'b'
vocabulary['be'] = 'b'
vocabulary['eye'] = 'i'
vocabulary['four'] = '4'
vocabulary['for'] = '4'
vocabulary['one'] = '1'
vocabulary['owe'] = 'o'
vocabulary['oh'] = 'o'
vocabulary['see'] = 'c'
vocabulary['sea'] = 'c'
vocabulary['two'] = '2'
vocabulary['too'] = '2'
vocabulary['to'] = '2'
vocabulary['why'] = 'y'
vocabulary['won'] = '1'
vocabulary['you'] = 'u'

n = int(input())

for lineNumber in range(1, n+1):

    line = input()

    newLine = "" 
    i = 0
    while i < len(line):
        found = False
        for key,value in vocabulary.items():
            if(line[i:i+len(key)].lower() == key):
                if line[i].isupper():
                    value = value[0].upper() + value[1:]
                newLine += value
                i += len(key) 
                found = True
                break
        if not found:
            newLine += line[i] 
            i += 1
    print(newLine)


