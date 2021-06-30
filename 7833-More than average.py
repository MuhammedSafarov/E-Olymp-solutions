n = int(input())
a = list(map(int, input().split()))
edediorta = sum(a)/len(a)
count1 = 0
count2 = 0

for i in a:
    if i > edediorta:
        count1 += 1
        count2 += i

print(count2, count1)
