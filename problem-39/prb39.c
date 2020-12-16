#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=30 && n<=50)
        printf("\nD");
    else if(n>=51 && n<=60)
        printf("\nC");
    else if(n>=61 && n<=80)
        printf("\nB");
    else if(n>=81 && n<=100)
        printf("\nA");
    else
        printf("\nInvalid Input");
    return 0;
}
