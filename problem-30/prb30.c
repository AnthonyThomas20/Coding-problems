#include<stdio.h>
#include<stdlib.h>
int totalSum(int n, int arr[], int x)
{
    int i,diff,sum=0;
    for(i=x-1;i<n-1;i++)
    {
       diff=abs(arr[i]-arr[i+1]);
       sum=sum+diff;
    }
    printf("%d",sum);
}

int main()
{
    int n,x,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    totalSum(n,a,x);
    return 0;
}
