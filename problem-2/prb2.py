n = int(input())
a = []
for x in range(n):
    a.append([int(y) for y in input().split()])
sum1 = 0
sum2 = 0
for i in range(n):
    sum1 = sum1 + a[i][i]
    sum2 = sum2 + a[i][n-i-1]
print(abs(sum1-sum2))
