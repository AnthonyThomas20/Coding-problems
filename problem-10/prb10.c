#include <stdio.h>

int sumOfValue(int len, int arr[], int value)
{
    int i,sum=0;
    for(i=0;i<len;i++)
    {
        if(arr[i]%value==0)
        {
            sum=sum+arr[i];    //adding all elements of the array that are divisible by the input value
        }
    }
    printf("%d",sum);    //displaying the sum
}

int main()
{
    int i,len,value;
    scanf("%d", &len);    //taking array length from user
    int arr[len];
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);    //taking array elements from user
    }
    scanf("%d", &value);    //taking required value from user
    sumOfValue(len,arr,value);    
    return 0;
}
