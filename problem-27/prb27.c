#include <stdio.h>

int programmerday(int s)
{
    if(s>=1700 && s<=1917)
    {
        if(s%4==0)
        {
            printf("\n12.09.%d",s);
        }
        else
        {
            printf("\n13.09.%d",s);
        }
    }
    else if(s==1918)
    {
        printf("\n26.09.%d",s);
    }
    else if(s>=1919 && s<=2700)
    {
        if((s%400==0) || (s%4==0 && s%100!=0))
        {
            printf("\n12.09.%d",s);
        }
        else
        {
            printf("\n13.09.%d",s);
        }
    }
    else
    {
        printf("\nINVALID INPUT");
    }
}

int main()
{
    int y;
    scanf("%d",&y);
    programmerday(y);
    return 0;
}
