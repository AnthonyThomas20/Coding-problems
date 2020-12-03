#include <stdio.h>

int differenceofSum(int n, int m)
{
    int i,dc=0,ndc=0,result;
    //dc = divisible count
    //ndc = not divisible count
    for(i=1;i<=m;i++)
    {
        if(i%n==0)
        {
            dc=dc+i;
        }
        else
        {
            ndc=ndc+i;
        }
    }
    result=ndc-dc;
    printf("\n%d",result);
}

int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    differenceofSum(n,m);
    return 0;
}
