#include <stdio.h>

int countpage(int n, int p)
{
    int t;
    t = (n/2 - p/2)/2;
    if(t<p/2)
    {
        t=p/2;
    }
    printf("\n%d",t);
}
 
int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    // n = number of pages in the book
    // p = required page number
    // t = number of pages to be turned to reach pth page
    countpage(n,p);
    return 0;
}
