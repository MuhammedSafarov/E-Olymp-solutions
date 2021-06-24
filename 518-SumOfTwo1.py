t=int(input())
c=[]
cem=0
for i in range(t):
    a,b=((int(a) for a in input().split()))
    cem=a+b
    c.append(cem)
for i in c:
    print(i)
