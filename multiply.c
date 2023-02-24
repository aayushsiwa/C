#include<stdio.h>

int main2();
float mul(float num1,float num2);

int main()
{
    int a, b, c;
    a=10;
    b=20;
    c=a*b;
    printf("The product of %d and %d is %d", a, b, c);
    main2();
    return 0;   
}

int main2()
{
    float a, b, c;
    printf("\nEnter the numbers:\n");
    scanf("%f %f",&a,&b);
//    c=a*b;
//    printf("The product of %.2f and %.2f is %.2f", a, b, c);
    c=mul(a,b);
    printf("%.2f",c);
    return 0;
}

float mul(float num1,float num2)
{
    float c;
    c=num1*num2;
    return c;
}