#include<stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    if(n<0 || n>1000000)
    {
        printf("\nINVALID INPUT");
    }
    else
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<0)
            {
                count++;
            }
        }
        printf("\n%d",count);
    }
    return 0;
}
