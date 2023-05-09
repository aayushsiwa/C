//wap to input name and print abbrevation in uppercase.
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int fxn(char s[100])
{
    if((s[0]!=' ') && (s[0]>='A' && s[0]<='Z'))
    {
        printf("%c. ",s[0]);
    }
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i-1]==' ')
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                printf("%c. ",s[i]);
                continue;
            }
            else
            {
                printf("Try Again");
                break;
            }
        }
        
        
    }
}
int main()
{
    char s[100];
    gets(s);
    fxn(s);
}