#include<stdio.h>

int findTotalCurtains(int n, int arr[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
       arr[i]=arr[i]/12;
       sum=sum+arr[i];
    }
    printf("%d",sum);
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
    findTotalCurtains(n,a);
    return 0;
}
