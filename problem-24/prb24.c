#include <stdio.h>

int main()
{
    int l,r,t,i,count=0;
    scanf("%d",&l);
    scanf("%d",&r);
    t=r-l+1;
    int a[t];
    for(i=0;i<t;i++,l++)
    {
        a[i]=l;
        if(a[i]/10!=a[i]%10)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nNo Unique Number");
    }
    else
    {
        printf("\n%d",count);
    }
    return 0;
}
