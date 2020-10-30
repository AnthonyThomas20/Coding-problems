#include<stdio.h>

int add(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n+add(n-1));
    }
    
}
int main()
{
    int n,i,sa=0,sb=0,ovr;
    scanf("%d",&n);
    if(n<0 || n>500)
    {
        printf("INVALID INPUT");
    }
    else
    {
        int a[n],b[n],s1=0,s2;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        s2=add(n);
        for(i=0;i<n;i++)
        {
            if(a[i]<=n)
            {
                s1=s1+a[i];
            }
        }
        ovr=s2-s1;
        printf("%d",ovr);
    }
    return 0;
}
