def check(a):
    if(a<0):
        print("Please enter a positive number")   #warning message for negative input
    elif(a==0 or a==1):
        print("NOT PRIME")    #message for input=0 or 1
    else:
        prime(a)    #passing value to function prime() if positive

def prime(n):
    flag=0    #value is 0 if prime and 1 if non-prime
    for i in range(2,n):
        if(n%i==0):
            flag=1    #value becomes 1 if number is divisible by any value of i, i.e., the number is not prime
            break
    if(flag==0):
        print("PRIME")
    else:
        print("NOT PRIME")

x=int(input())  #taking user input  
check(x)
