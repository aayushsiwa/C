//wap to count vowels in a string by using pointer.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0;
    printf("Enter the string: ");
    gets(s);
    char *p;
    p=s;
    while(*p!='\0')
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
        {
            printf("%c",*p++);
            c++;
        }
    }
    printf("The number of vowels in the string is %d",c);
    return 0;
}