a = list(str(input()))

if(len(a) == 0 or len(a)>100):
    print("INVALID INPUT")
else:
    b = list(reversed(a))
    count = 0
    for i in range(len(a)):
        if(a[i] == b[i]):
            count = count + 1
    print("\n" + str(count))
