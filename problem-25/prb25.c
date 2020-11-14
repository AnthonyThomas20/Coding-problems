#include<stdio.h>

int pairs(int a[],int n,int k)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]-a[j]==k || a[j]-a[i]==k)
            {
                count++;
            }
        }
    }
    printf("\n%d",count);
}

int main()
{
    int n,k,i;
    // n = size of array
    // k = target value
    scanf("%d %d", &n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    pairs(a,n,k);
    return 0;
}
