//wap to calculate the sum of digits of a given number
#include<stdio.h>
int main()
{
    int i,s=0,b;
    scanf("%d",&i);
    while (i>0)
    {
        b=i%10;
        s=s+b;
        i=i/10;
    }
    printf("%d",s);
}