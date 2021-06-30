a = int(input())
b = a // 5
d = a % 5
if d > 0:
    if a // 5 < 1 and a >= 0:
        b = -1
else:
    b = (a // 5) - 1
    
c = b * 5
print(c)
