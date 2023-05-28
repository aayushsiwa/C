//wap to print string using pointer
#include<stdio.h>
int main()
{
    char s[100];
    char *a;
    printf("-");
    gets(s);
    a=s;
    while(*a!='\0') 
    {
        printf("%c",*a++);
    }
}