#include<stdio.h>

int prime(int n)
{
    int flag=0;  //value of 0 indicates prime and value of 1 indicates non-prime
    for(int i=2;i<n;i++)
    {
       if(n%i==0)
       {
           flag=1;  //flag value is changed if the input is divisible by any value of i, i.e., it is not prime
           break;
       }
    }
    if(flag==0)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
}

int check(int a)
{
  if(a<0)
	{
	    printf("Please enter a positive number");  //warning message for negative input
	}
	else if(a==0 || a==1)
	{
	    printf("NOT PRIME");  //message for input=0 or input=1
	}
	else
	{
	    prime(a);  //passing input to function prime when positive
	}
}

int main()
{
	int x;
	scanf("%d", &x);  //taking user input
	check(x);
return 0;
}
