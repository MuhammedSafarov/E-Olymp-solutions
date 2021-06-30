a,b=map(int,input().split())
for i in range(a,b+1):
    x=i%10
    A=int((i%100)/10)
    B=int((i%1000)/100)
    C=int((i%10000)/1000)
    if x%2==1 and A%2==1 and B%2==1 and C%2==1:
        print(i,end=' ')
