#include <stdio.h>

int main()
{
    char ch;
    int x;
    scanf("%c",&ch);
    scanf("%d",&x);
    switch(ch)
    {
        case 'c':
            if(x==1)
                printf("\nWelcome to CCD!\nEnjoy your Espresso Coffee!");
            else if(x==2)
                printf("\nWelcome to CCD!\nEnjoy your Cappuccino Coffee!");
            else if(x==3)
                printf("\nWelcome to CCD!\nEnjoy your Latte Coffee!");
            else
                printf("\nINVALID OPTION");
                break;
        case 't':
            if(x==1)
                printf("\nWelcome to CCD!\nEnjoy your Plain Tea!");
            else if(x==2)
                printf("\nWelcome to CCD!\nEnjoy your Assam Tea!");
            else if(x==3)
                printf("\nWelcome to CCD!\nEnjoy your Ginger Tea!");
            else if(x==4)
                printf("\nWelcome to CCD!\nEnjoy your Cardamom Tea!");
            else if(x==5)
                printf("\nWelcome to CCD!\nEnjoy your Masala Tea!");
            else if(x==6)
                printf("\nWelcome to CCD!\nEnjoy your Lemon Tea!");
            else if(x==7)
                printf("\nWelcome to CCD!\nEnjoy your Green Tea!");
            else if(x==8)
                printf("\nWelcome to CCD!\nEnjoy your Organic Darjeeling Tea!");
            else
                printf("\nINVALID OPTION");
                break;
        case 's':
            if(x==1)
                printf("\nWelcome to CCD!\nEnjoy your Hot and Sour Soup!");
            else if(x==2)
                printf("\nWelcome to CCD!\nEnjoy your Veg Corn Soup!");
            else if(x==3)
                printf("\nWelcome to CCD!\nEnjoy your Tomato Soup!");
            else if(x==4)
                printf("\nWelcome to CCD!\nEnjoy your Spicy Tomato Soup!");
            else
                printf("\nINVALID OPTION");
                break;
        case 'b':
            if(x==1)
                printf("\nWelcome to CCD!\nEnjoy your Hot Chocolate!");
            else if(x==2)
                printf("\nWelcome to CCD!\nEnjoy your Badam Drink!");
            else if(x==3)
                printf("\nWelcome to CCD!\nEnjoy your Badam-Pista Drink!");
            else
                printf("\nINVALID OPTION");
                break;
    }
    return 0;
}
