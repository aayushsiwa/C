//wap to create basic calculator using switch case
#include<stdio.h>
int add(float a, float b)
{
    return a+b;
}
int sub(float a, float b)
{
    return a-b;
}
int mul(float a, float b)
{
    return a*b;
}
float div(float a, float b)
{
    return a/b;
}
int fl(int a, int b)
{
    return a%b;
}
int calc(char op,float a,float b,float ans)
{   
    switch(op)
    {
        case('+'):
        {
            ans=add(a,b);
            break;
        }
        case('-'):
        {
            ans=sub(a,b);
            break;
        }
        case('*'):
        {
            ans=mul(a,b);
            break;
        }
        case('/'):
        {
            ans=div(a,b);
            break;
        }
        case('%'):
        {
            ans=fl(a,b);
            break;
        }
        default:
        {
            printf("Try again");
            break;
        }
    }
    printf("%.2f %c %.2f = %.2f",a,op,b,ans);
}
int main()
{
    char op;
    float a , b, ans;
    printf("Enter the operator(+,-,*,/<%%)\n:");
    scanf("%c",&op);
    printf("Enter the two operands\n:");
    scanf("%f %f",&a, &b);
    calc(op,a,b,ans);
}