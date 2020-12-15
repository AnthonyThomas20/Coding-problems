#include <stdio.h>

int productSmallestPair(int arr[], int s, int n)
{
    int i,j,r,a,temp;
    if(n<=2)
    {
        a=-1;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        r=arr[0]+arr[1];
        if(r<s)
        {
            a=arr[0]*arr[1];
        }
        else
        {
            a=0;
        }
    }
    return a;
}

int main()
{
    int n,i,s,result;
    scanf("%d",&s);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    result=productSmallestPair(a,s,n);
    printf("\n%d",result);
    return 0;
}
