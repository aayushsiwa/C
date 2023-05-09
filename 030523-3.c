//wap to change all operands of a character in a given string with a new character.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],a,b;
    int j;
    printf("Enter the string: ");
    gets(s);
    printf("Which character do you want to replace: ");
    scanf("%c %c",&a,&b);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==a)
        {
            j=b;
            s[i]=j;
        }
    }
    puts(s);
}