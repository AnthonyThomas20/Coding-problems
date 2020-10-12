#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);  //taking user input
        }
    }
    int sum1=0, sum2=0;
    for(i=0; i<n; i++)
    {
        sum1=sum1+a[i][i];  //sum of diagonal elements from upper left to lower right
        sum2=sum2+a[i][n-i-1];  //sum of diagonal elements from upper right to lower left
    }
    printf("%d",abs(sum1 - sum2));
    return 0;
}
