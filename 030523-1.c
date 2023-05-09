//wap to extract a substring from a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);
    int a,b,l=strlen(s);
    printf("Enter the start point:");
    scanf("%d",&a);
    printf("Enter the number of characters:");
    scanf("%d",&b);
    if (a+b-1<=l)
    {
        for(int i=a-1;i<a+b-1;i++)
        {
            printf("%c",s[i]);
        }       
    }
    else
    {
        printf("Given values out of index");
    }

}