n = int(input())
sumValue = 0
for i in range(1,11):
    value = n * i
    print(value, end=" ")
    sumValue = sumValue + value
print("\n" + str(sumValue))
