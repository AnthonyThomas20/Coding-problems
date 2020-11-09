n = int(input())
a = 1 
b = 1 

if(n < 1):
    print("INVALID INPUT")
else:
    for i in range(1, n):
        if(i % 2 != 0):
            a = a * 2
        else:
            b = b * 3
    if(n % 2 != 0):
        print(a)
    else:
        print(b)
