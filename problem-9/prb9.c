#include <stdio.h>

int main() 
{
   int y;
   scanf("%d",&y);
   if ( (year%400 == 0) || ((y % 4 == 0) && (y % 100!= 0)) )
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);
return 0;
}
