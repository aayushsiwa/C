//wap to calculate the gcd of two number
#include<stdio.h>
int gcd(int a, int b)
{
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
int main()
{
    int a,b;
    printf("Enter the numbers that you need to find gcd of:\n");
    scanf("%d %d",&a,&b);
    gcd(a,b);
}