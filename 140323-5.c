//wap to reverse a number
#include<stdio.h>
int main()
{
    int a, b, c=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("%d",c);

}