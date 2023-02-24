#include<stdio.h>

int main()
{
    int a, b, c;
    a=10;
    b=20;
    c=a*b;
    printf("The product of %d and %d is %d", a, b, c);
    return 0;   
}

int main2()
{
    float a, b, c;
    printf("Enter the numbers:");
    scanf("%d %d", a ,b);
    c=a*b;
    printf("The product of %d and %d is %d", a, b, c);
    return 0;
}