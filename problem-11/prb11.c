#include <stdio.h>

int main()
{
    int n=10,x;
    //n is the capacity of jar
    //k = 5 is the minimum number of candies that should remain in the jar
    //x is the user input
    scanf("%d", &x);
    if(x>1 && x<=5)
    {
        printf("\nNUMBER OF CANDIES SOLD : %d", x);
        printf("\nNUMBER OF CANDIES AVAILABLE : %d", n-x);
    }
    else
    {
        printf("\nINVALID INPUT");
        printf("\nNUMBER OF CANDIES LEFT : %d", n);
    }
    return 0;
}
