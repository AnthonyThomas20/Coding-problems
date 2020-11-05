#include <stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d",&m);
    scanf("%d",&n);
    float a[m],b[n],s1=0.0f,s2=0.0f,cost;
    if((m==0) && (n==0))
    {
        printf("\nTotal estimated Cost : 0 INR");   //if number of both walls are 0 then print cost as 0
    }
    else if((m!=0) && (n==0))
    {
        for(i=0;i<m;i++)
        {
            scanf("%f",&a[i]);      //if only number of interior walls is not 0 then calculate painting cost for only interior walls
            s1=s1+a[i];
        }  
        cost=s1*18.0;
        printf("\nTotal estimated Cost : %.1f INR", cost);
    }
    else if((m==0) && (n!=0))
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&b[j]);      //if only number of exterior walls is not 0 then calculate painting cost for only exterior walls     
            s2=s2+b[j];
        }  
        cost=s2*12.0;
        printf("\nTotal estimated Cost : %.1f INR", cost);
    }
    else        //if number of both walls are non-zero then calculate total painting cost for both
    {
        for(i=0;i<m;i++)
        {
            scanf("%f",&a[i]);
            s1=s1+a[i];
        }
        for(j=0;j<n;j++)
        {
            scanf("%f",&b[j]);
            s2=s2+b[j];
        }  
        cost=s1*18.0+s2*12.0;
        printf("\nTotal estimated Cost : %.1f INR", cost);
    }
    
    return 0;
}
