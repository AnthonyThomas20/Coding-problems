#include <stdio.h>

int main()
{
    int n,i,value,sum=0;
    scanf("%d", &n);  //taking user input
    for(i=1;i<=10;i++)
    {
        value=n*i;  //computing the table values from 1 to 10
        printf("%d ",value);  //printing table values of given number separated by space
        sum=sum+value;  //calculating the sum of all table values
    }
    printf("\n%d",sum);  //displaying the sum
    return 0;
}
