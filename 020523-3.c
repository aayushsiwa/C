//wap to compare two strings by using strcmp?
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter the first string:\n");
    gets(s1);
	printf("Enter the second string:\n");
    gets(s2);
    if (strcmp(s1,s2))
    {
        printf("Not Same");
    }
    else
    {
        printf("Same");
    }
}