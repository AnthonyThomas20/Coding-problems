#include<stdio.h>
#include<string.h>
int main()
{
    char str[16][10]={"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    char input[20];
    scanf("%s",input);
    int flag=0;
    for(int i=0;i<16;i++)
    {
        if(strcmp(input,str[i])==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%s is a keyword",input);
    }
    else
    {
        printf("%s is not a keyword",input);
    }
    return 0;
}
