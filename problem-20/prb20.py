def timeEst(n):
    if(n == 0):
        print("Time Estimated: 0 minutes")
    elif(n >= 1) and (n <= 2000):
        print("Time Estimated: 25 minutes")
    elif(n >= 2001) and (n <= 4000):
        print("Time Estimated: 35 minutes")
    elif(n >= 4001) and (n <= 7000):
        print("Time Estimated: 45 minutes")
    elif(n >= 7001):
        print("OVERLOADED")
    else:
        print("INVALID INPUT")
        
w = int(input())
timeEst(w)
