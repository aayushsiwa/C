//wap to evaluate y=(x)^m
#include<stdio.h>
int main()
{
    int x,m,i,mul=1;
    printf("Enter the base:\n");
    scanf("%d",&x);
    printf("Enter the power:\n");
    scanf("%d",&m);
    i=m;
    while(m>0)
    {
        mul*=x;
        m-=1;
    }
    printf("(%d)^%d = %d",x,i,mul);
}