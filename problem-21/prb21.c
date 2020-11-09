#include<stdio.h>

int main()
{
    int n,i,a=1,b=1;
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
                a=a*2;
            }
            else
            {
                b=b*3;
            }
        }
        if(n%2!=0)
        {
            printf("\n%d", a/2);
        }
        else
        {
            printf("\n%d", b/3);
        }
    }
    return 0;
}
