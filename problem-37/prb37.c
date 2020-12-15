#include <stdio.h>

int largeSmallSum(int arr[], int n)
{
    int r,i,j,temp,ec=0,oc=0;
    int e[n],o[n];
    if(n<=0)
    {
        r=0;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                e[ec]=arr[i];
                ec++;
            }
            else
            {
                o[oc]=arr[i];
                oc++;
            }
        }
        for(i=0;i<ec;i++)
        {
            for(j=i+1;j<ec;j++)
            {
                if(e[i]<e[j])
                {
                    temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                }
            }
        }
        for(i=0;i<oc;i++)
        {
            for(j=i+1;j<oc;j++)
            {
                if(o[i]<o[j])
                {
                    temp=o[i];
                    o[i]=o[j];
                    o[j]=temp;
                }
            }
        }
        r=e[1]+o[1];
        return r;
    }
}

int main()
{
    int n,i,result;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    result=largeSmallSum(a,n);
    printf("%d",result);
    return 0;
}
