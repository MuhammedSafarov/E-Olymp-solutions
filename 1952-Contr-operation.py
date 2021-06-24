x=list(map(int,input().split()))
l=[]
x.pop(0)
for i in x:
    if i==max(x):
        l.append(min(x))
    else:
        l.append(i)
for t in l:
    print(t,end=' ')
