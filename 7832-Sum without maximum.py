n = int(input())
a = list(map(int, input().split()))
count = 0
b = max(a)
for i in a:
    if i == b:
        continue
    count += i

print(count)
