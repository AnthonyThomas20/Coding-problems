#include <stdio.h>

int main()
{
    int n,k,j,m,p;
    float a=0.0, b=0.0;
    // n = Total number of monkeys
    // k = Number of eatable bananas by monkeys
    // j = Number of eatable peanuts by monkeys
    // m = Total number of bananas
    // p = Total number of peanuts
    scanf("%d %d %d %d %d",&n,&k,&j,&m,&p);
    if(n<0 || k<0 || j<0 || m<0 || p<0)
    {
        printf("\nINVALID INPUT");
    }
    else
    {
        // a = number of monkeys that ate bananas
        // b = number of monkeys that ate peanuts
        if(k>0)
        {
            a=(float)m/k;
        }
        if(j>0)
        {
            b=(float)p/j;
        }
        n=n-a-b;    // number of monkeys left on tree
        printf("\nNumber of  Monkeys left on the tree:%d",n);
    }
    return 0;
}
