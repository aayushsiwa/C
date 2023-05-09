//wap to copy one string into another without using lib function
#include<stdio.h>
int copy(char s[100], char d[100])
{
    int i;
    for(i=0;i<=100;i++)
    {
        d[i]=s[i];
    }
    printf("Here is the copied string:\n");
    puts(d);  
}

int main()
{
    char s[100], d[100];
    printf("Enter the string:\n");
    gets(s);
    copy(s,d);
}