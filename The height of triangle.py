from math import *

S, a = map(int, input().split())
h = (-a + sqrt(a*a + 8*S))/2.0
print('%.2f' % h)
