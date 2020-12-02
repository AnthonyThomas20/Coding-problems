#include <stdio.h>

int countOddEvenDifference(int x, int arr[])
{
    int i,oc=0,ec=0,result;
    for(i=0;i<x;i++)
    {
        if(arr[i]%2==0)
        {
            ec++;
        }
        else if(arr[i]%2!=0)
        {
            oc++;
        }
    }
    result=oc-ec;
    printf("%d",result);
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
    countOddEvenDifference(n,a);
    return 0;
}
