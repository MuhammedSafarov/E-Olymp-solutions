n = int(input())
a = list(map(int, input().split()))

a.sort()

count = a[-1] + a[-2]
print(count)
