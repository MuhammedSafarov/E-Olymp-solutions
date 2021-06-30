n=int(input())
a=[int(i) for i in input().split()]
maximum=max(a)
count=0

for i in a: 
    if i==maximum:
        count+=1
print(count)
