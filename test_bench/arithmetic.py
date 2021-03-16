import io
import math

octalToBinary = {"0":"000", "1":"001",\
              "2":"010", "3":"011",\
              "4":"100", "5":"101",\
              "6":"110", "7":"111" }

binaryToHex = {"0000":"0", "0001":"1",\
               "0010":"2", "0011":"3",\
               "0100":"4", "0101":"5",\
               "0110":"6", "0111":"7",\
               "1000":"8", "1001":"9",\
               "1010":"A", "1011":"B",\
               "1100":"C", "1101":"D",\
               "1110":"E", "1111":"F" }

octalForm = input()
binaryForm = ""
hexForm = ""
for c in octalForm[::-1]:
    binaryForm = octalToBinary[c] + binaryForm
    if(len(binaryForm) >= 4):
        hexForm = binaryToHex[binaryForm[-4:]] + hexForm
        binaryForm = binaryForm[:-4]

while len(binaryForm)%4 != 0:
    binaryForm = "0"+binaryForm
if binaryForm != "":
    hexForm = binaryToHex[binaryForm] + hexForm

print(hexForm)

