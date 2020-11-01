#include <stdio.h>

int main()
{
    int d,n;
    scanf("%d",&d);
    if(d<0)
    {
        printf("Please enter positive number");
    }
    else if(d==0)
    {
        printf("Square root of %d is 0",d);
    }
    else if(d==1)
    {
        printf("Square root of %d is 1",d);
    }
    else
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("Invalid input");
        }
        else
        {
            if((d/n==n)&&(d%n==0))
            {
                printf("Square root of %d is %d",d,n);
            }
            else
            {
                printf("%d is not a square root of %d",n,d);
            }
        }
    }
    return 0;
}
