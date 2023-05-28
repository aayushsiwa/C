//wap to print a string in reverse order using pointer.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char *p;
    printf("-");
    gets(s);
    p=s;
    int i=0,n=strlen(s);
    for(i=n;i>=0;i--)
    {
        printf("%c",p[i]);    
    }
}