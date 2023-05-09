//wap to copy one string into another by using lib function strcpy
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], d[100];
    printf("Enter the string:\n");
    gets(s);
    strcpy(d,s);
    printf("Here is the copied string:\n");
    puts(s);
}
