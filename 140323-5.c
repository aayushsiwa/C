//wap to reverse a number
#include<stdio.h>
int rev(int a)
{
    int b, c=0;
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("%d",c);
}
int main()
{
    int a;
    printf("Enter the number that is to be reversed:\n");
    scanf("%d",&a);
    rev(a);
}