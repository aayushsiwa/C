//wap to find the square of a number using user defined function
#include<stdio.h>
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The square of %d is %d",n,square(n));
}