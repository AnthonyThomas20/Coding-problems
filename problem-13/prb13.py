n = int(input())
a = 0 
b = 0

if(n < 1):
    print("INVALID INPUT")
else:
    for i in range(1, n):
        if(i % 2 != 0):
            a = a + 7
        else:
            b = b + 6
    if(n % 2 != 0):
        print(a)
    else:
        print(b)
