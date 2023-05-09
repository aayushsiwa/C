//wap to valid e-mail address checking.(a@b.c)
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter the e-mail address: ");
    gets(s);
    int a=s[0],apos,dpos,cdot=0,cat=0;
    for(int i=0;i<=strlen(s);i++)
    {
        if(s[i]=='@')
        {
            apos=i;
            cat+=1;
        }
        else if(s[i]=='.')
        {
            dpos=i;
            cdot+=1;
        }
    }
    if(apos>dpos || cat>1 || apos==-1 || (a<=97 && a>=122))
    {
        printf("\nInvalid Email Address");
    }
    else
    {
        printf("\nValid Email Address");
    }   
}