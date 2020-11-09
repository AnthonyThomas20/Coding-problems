#include<stdio.h>

int main()
{
    int n,i,a=0,b=0;
    scanf("%d", &n);
    if(n<1)
    {
        printf("\nINVALID INPUT");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                a=a+7;
            }
            else
            {
                b=b+6;
            }
        }
        if(n%2!=0)
        {
            printf("\n%d", a-7);
        }
        else
        {
            printf("\n%d", b-6);
        }
    }
    return 0;
}
