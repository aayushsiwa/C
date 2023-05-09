//wap to compare two strings without using library function
#include<stdio.h>
#include<string.h>
int len(char s[100])
{
    int i;
	for (i = 0; s[i] != '\0'; ++i);
    return i;
}

int strcomp(char s1[100],char s2[100])
{   
    int n=0,l;
    l=len(s1);
    for(int i=0;i<=l;i++)
    {
        if (s1[i]==s2[i])
        {
            continue;
        }
        else
        {
            n=1;
        }
    }
    if (n==1)
    {
        printf("Not Same");
    }
    else
    {
        printf("Same");
    }
}

int main()
{
    char s1[100],s2[100];
	printf("Enter the first string:\n");
    gets(s1);
	printf("Enter the second string:\n");
    gets(s2);
    strcomp(s1,s2);
}