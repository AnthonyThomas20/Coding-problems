#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    //The capacity of jar is 10
    //The minimum number of candies that should remain in the jar is 5
    //x is the user input
    
    if(x>1 && x<=5)
    {
        printf("\nNUMBER OF CANDIES SOLD : %d", x);
        printf("\nNUMBER OF CANDIES AVAILABLE : %d", 10-x);
    }
    else
    {
        printf("\nINVALID INPUT");
        printf("\nNUMBER OF CANDIES LEFT : 10");
    }
    return 0;
}
