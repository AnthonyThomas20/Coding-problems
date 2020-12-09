#include<stdio.h>
#include<string.h>

void replaceCharacter(char str[], int n, char c1, char c2)
{
    for(int i=0;i<n;i++)
    {
        if(str[i]==c1)
        {
            str[i]=c2;
        }
        else if(str[i]==c2)
        {
            str[i]=c1;
        }
    }
    printf("%s",str);
}

int main()
{
    char a[100],b,c;
    int len;
    scanf("%s",a);
    scanf("%s",&b);
    scanf("%s",&c);
    len=strlen(a);
    replaceCharacter(a,len,b,c);
    return 0;
}
