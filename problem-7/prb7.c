#include <stdio.h>

int powrec(int base, int expo)
{
    if(expo==1)
    {
        return (base);
    }
    else
    {
        return (base*powrec(base,expo-1));
    }
}

int main()
{
    int b,e;
    scanf("%d",&b);
    scanf("%d",&e);
    printf("%d",powrec(b,e));
    return 0;
}
