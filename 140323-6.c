//wap to calculate the gcd of two number
#include<stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else 
        {
            b=b-a;
        }
    }
    printf("%d",a);
}