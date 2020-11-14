#include <stdio.h>
int main()
{
    int n,p,t;
    scanf("%d",&n);
    scanf("%d",&p);
    // n = number of pages in the book
    // p = required page number
    // t = number of pages to be turned to reach pth page
    
    t = (n/2 - p/2)/2;
    if(t<p/2)
    {
        t=p/2;
    }
    printf("\n%d",t);
    return 0;
}
