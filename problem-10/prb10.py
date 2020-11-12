def sumOfValue(l, arr, v):
    s = 0
    for i in range(0, l):
        if(int(arr[i]) % v == 0):
            s = s + int(arr[i])
    print("\n" + str(s))
    
length = int(input())
array = [length]
array = list(map(int, input().split()))
value = int(input())

sumOfValue(length, array, value)
