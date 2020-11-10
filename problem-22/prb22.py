a = list(str(input()))
b = list(reversed(a))
count = 0
for i in range(len(a)):
    if(a[i] == b[i]):
        count = count + 1
print("\n" + str(count))
