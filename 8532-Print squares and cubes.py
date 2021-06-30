a,b=map(int,input().split())

for i in range(a, b+1):
    i = i**2
    print(i, end=' ')
print()

for j in range(b, a-1, -1):
    j = j**3
    print(j, end=' ')
