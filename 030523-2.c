//wap to print number of vowels and consontants in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch;
    int v=0,c=0,a;
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        ch=s[i];
        if(ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
        {
            v++;
        }
        else
        {
            if(ch==' ')
            {
                continue;
            }
            else
            {
                c++;
            }
        }
    }
    printf("V=%d\n",v);
    printf("C=%d",c);
}