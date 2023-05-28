//wap to calculate the length of a string using a pointer
#include<stdio.h>
int main()
{
    int i,len=0;
    char s[100];
    char *p;
    printf("Enter the string:");
    gets(s);
    p=s;
    printf("The length of ");
    while(*p!='\0')
    {
        printf("%c",*p++);
        len++;
    }
    printf(" is %d",len);
}