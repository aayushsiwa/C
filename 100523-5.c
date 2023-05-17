//wap to check whether two given strings are anagram
#include<stdio.h>
#include<string.h>
int isanagram(char s1[100],char s2[100])
{
    int i,j,l=strlen(s1),v=0;
    if(strlen(s1)==strlen(s2))
    {
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                if(s1[i]==s2[j])
                {
                    v+=1;
                }
            }
        }
    }
    else
    {
        printf("Not anagrams");
    }
    if(v==l)
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not anagrams");
    }
}
int main()
{
    char s1[100],s2[100];
    printf("Enter 1st string:");
    gets(s1);
    printf("Enter 2nd string:");
    gets(s2);
    isanagram(s1,s2);
}