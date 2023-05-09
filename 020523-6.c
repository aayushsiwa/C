//wap to print reverse of a string without using library function.
#include<stdio.h>
int len(char s[100])
{
    int i;
    for (i=0;s[i]!='\0';++i);
    return i;
}
int strev(char s[100])
{
    int l=len(s),j,i;
    j=1;
    char s2[l];
    for(i=l-1;i>=0;i--)
    {   
        s2[j++]=s[i];
    }
    s2[i]='\0';
    printf("->%s",s2);
}
int main()
{
    char s1[100];
    gets(s1);
    strev(s1);
}