#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);  //taking size of matrix from user
    int a[n][n];  //initializing 2D matrix of size n x n 
    int i,j,flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);  //taking user input for matrix elements
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j && a[i][j]!=1)  
            {
                flag++;  //incrementing value of flag variable if diagonal elements of matrix only from left to right are not equal to 1
            }
            else if(i!=j && a[i][j]!=0)  
            {
                flag++;  //incrementing value of flag variable if non-diagonal elements of matrix only from left to right are not equal to 0
            }
        }
    }
    if(flag==0)
    {
        printf("Yes");  //indicates an identity matrix
    }
    else
    {
        printf("No");
    }
    return 0;
}
