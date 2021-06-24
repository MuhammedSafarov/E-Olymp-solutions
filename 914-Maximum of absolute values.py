n = int(input())
a = list(map(float, input().split()))
list_num = []

for i in a:
    if i < 0:
        i = abs(i)
    list_num.append(i)

print('%.2f' % max(list_num))
