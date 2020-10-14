#include<stdio.h>

int main()
{
    char a[100],b[100],c[100];  //taking 3 words as separate input into 3 different arrays
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    int i,j,k;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            a[i]='%';  //converting all vowels to % character in the first word
        }
    }
    for(j=0;b[j]!='\0';j++)
    {
        if(!(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u'||b[j]=='A'||b[j]=='E'||b[j]=='I'||b[j]=='O'||b[j]=='U'))
        {
            b[j]='#';  //converting all consonants to # character in the second word
        }
    }
    for(k=0;c[k]!='\0';k++)
    {
        if(c[k]>='a'&&c[k]<='z')
        {
            c[k]=c[k]-32;  //converting all characters to uppercase in the third word
        }
    }
    printf("%s%s%s",a,b,c);  //concatenating all transformed strings
    return 0;
}
