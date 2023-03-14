//wap to check whether a given number is prime or not
#include<stdio.h>
int main()
{
    int a,b=1,i;
    scanf("%d",&a);
    if (a<=1)
    {
        b=0;
    }
    for (i=2;i<a;i++)
    {
        if (a%i==0)
        {
            b=0;
        }
        else
        {
        }
    }   
    if (b==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not");
    }
}