n1 = int(input())
if(n1 < 0):
    print("Please enter a positive number")
elif(n1 == 0):
    print("Square root of " + str(n1) + " is 0")
elif(n1 == 1):
    print("Square root of " + str(n1) + " is 1")
else:
    n2 = int(input())
    if(n2 == 0):
        print("Invalid input")
    else:
        if((n1 / n2 == n2) and (n1 % n2 == 0)):
            print("Square root of " + str(n1) + " is " + str(n2))
        else:
            print(str(n2) + " is not a square root of " + str(n1))
