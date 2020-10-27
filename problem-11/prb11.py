n = 10
x = int(input())
if(x > 1 and x <= 5):
    print("\nNUMBER OF CANDIES SOLD : " + str(x))
    print("NUMBER OF CANDIES AVAILABLE : " + str(n-x))
else:
    print("\nINVALID INPUT : " + str(x))
    print("NUMBER OF CANDIES LEFT : " + str(n-x))
