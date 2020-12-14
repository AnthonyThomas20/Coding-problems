#include <stdio.h>

int main()
{
    int i,a[8];
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    //  0   1   2   3   4   5   6   7   Bit positions
    //  A   B   C   D   E   F   G   H   Vertices
    if((a[0]>=a[6]) || (a[4]>=a[2]))
    {
        printf("\n0");  //no overlap
    }
    else
    {
        printf("\n1");  //overlap
    }
    return 0;
}
