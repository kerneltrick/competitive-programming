import sys
import math


a, n = map(float, sys.stdin.readline().strip().split())

radius = (n / math.pi)/2

area = math.pi * radius * radius

if area > a:
    print("Diablo is happy!")
else:
    print("Need more materials!")
