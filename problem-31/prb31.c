#include<stdio.h>

int findDifference(int n, int arr[])
{
    int i,diff,ec=0,oc=0;
    for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
           ec=ec+arr[i];
       }
       else
       {
           oc=oc+arr[i];
       }
    }
    diff=ec-oc;
    printf("%d",diff);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    findDifference(n,a);
    return 0;
}
