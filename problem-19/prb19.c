#include <stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d",&m);
    scanf("%d",&n);
    float a[m],b[n],s1=0.0f,s2=0.0f,cost;
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
    
    return 0;
}
