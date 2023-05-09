//wap to change string to uppercase or lowercase based on user_input.
#include<stdio.h>
#include<string.h>
int isInRange(int lowerLimit, int upperLimit, int no)
{
    return (lowerLimit < no && no < upperLimit);
}

int main()
{
    char s[100];
    gets(s);
    int n,l=strlen(s),i,a;
    printf("Enter your choice:-\nConvert to uppercase-1\nConvert to lowercase-2\n>");
    scanf("%d",&n);
    if(n==1)
    {
        for(i=0;i<l;i++)
        {
            a=s[i];
            if(a>=95 && a<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    else if(n==2)
    {
        for(i=0;i<l;i++)
        {
            a=s[i];
            if(a>=65 && a<=92)
            {
                s[i]=s[i]+32;
            }
        }
    }
    puts(s);
}