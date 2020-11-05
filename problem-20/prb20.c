#include<stdio.h>

int timeEst(int n)
{
    if(n==0)
        printf("\nTime Estimated: 0 minutes");
    else if(n>=1 && n<=2000)
        printf("\nTime Estimated: 25 minutes");
    else if(n>=2001 && n<=4000)
        printf("\nTime Estimated: 35 minutes");
    else if(n>=4001 && n<=7000)
        printf("\nTime Estimated: 45 minutes");
    else if(n>7000)
        printf("\nOVERLOADED");
    else
        printf("\nINVALID INPUT");
}

int main()
{
    int w;
    scanf("%d", &w);
    timeEst(w);
    return 0;
}
