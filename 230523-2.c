//wap to perform sum of two numbers using pointer
#include<stdio.h>
int main()
{
    int a,b,*x,*y;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    x=&a;
    y=&b;
    int sum=*x+*y;
    printf("%d",sum);
}