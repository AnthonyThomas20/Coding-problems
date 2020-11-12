#include <stdio.h>

int main()
{
    int l,r,i,count=0;
    scanf("%d",&l);
    scanf("%d",&r);
    
    for(i=l;i<=r;i++)
    {
        if(i/10!=i%10)
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
