#include <stdio.h>

int evaluate(int t1, int t2, int t3)
{
    if((t1>=70)&&(t2>=70)&&(t3>=70))
    {
        if((t1>t2)&&(t1>t3))
        {
            printf("\nTrainee number: 1");
        }
        else if((t2>t1)&&(t2>t3))
        {
            printf("\nTrainee number: 2");
        }
        else if((t3>t1)&&(t3>t2))
        {
            printf("\nTrainee number: 3");
        }
        else if((t1==t2)&&(t1>t3))
        {
            printf("\nTrainee number: 1");
            printf("\nTrainee number: 2");
        }
        else if((t2==t3)&&(t2>t1))
        {
            printf("\nTrainee number: 2");
            printf("\nTrainee number: 3");
        }
        else if((t1==t3)&&(t1>t2))
        {
            printf("\nTrainee number: 1");
            printf("\nTrainee number: 3");
        }
        else if((t1==t2)&&(t2==t3))
        {
            printf("\nTrainee number: 1");
            printf("\nTrainee number: 2");
            printf("\nTrainee number: 3");
        }
    }
    else
    {
        printf("\nTrainees are unfit");
    }   
}

int main()
{
    int i,a[9],t1,t2,t3,flag=0;
    for(i=0;i<9;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<0 || a[i]>100)
        {
            flag++;
        }
    }
    if(flag==0)
    {
        t1=(a[0]+a[3]+a[6])/3;
        t2=(a[1]+a[4]+a[7])/3;
        t3=(a[2]+a[5]+a[8])/3;
        evaluate(t1,t2,t3);
    }
    else
    {
        printf("\nINVALID INPUT");
    }
    return 0;
}
