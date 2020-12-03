def differenceofSum(n,m):
    dc=0
    ndc=0
    for i in range(1,m+1):
        if(i % n == 0):
            dc = dc + i
        else:
            ndc = ndc + i
    result = ndc - dc
    print("\n" + str(result))
            
n = int(input())
m = int(input())
differenceofSum(n,m)
