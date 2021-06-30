n=int(input())
a=list(map(float,input().split()))
c=[]
for i in range(len(a)):
    if i== len(a)-1:
        break
    elif a[i] < a[i+1]:
        c.append(a[i+1])
for i in c:
    print(i,end=' ')
