#include <stdio.h>

int main()
{
    int n,i,a=1,b=1,c,even=0,odd=2;
    scanf("%d",&n);
    if(n>5 || n<=20)
    {
        printf("%d %d ", a,b);
        for(i=0;i<n-2;i++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("%d ", c);
            if(c%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        printf("\n%d\n%d",even,odd);
    }
    else
    {
        printf("INVALID INPUT");
    }

    return 0;
}
