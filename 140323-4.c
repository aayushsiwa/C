//wap to calculate the sum of digits of a given number
#include<stdio.h>
int sod(int i)
{
    int b,s=0;
    while (i>0)
    {
        b=i%10;
        s=s+b;
        i=i/10;
    }
    printf("%d",s);
}
int main()
{
    int i;
    scanf("%d",&i);
    sod(i);
}