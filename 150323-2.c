//wap to check whether a number is an Angstrom number or not
#include<stdio.h>
int is_ang(int a)
{
    int b, c=0, d=a, sum=0;
    while(a>0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
        sum+=b*b*b;
    }
    if (sum==d)
    {
        printf("The given number is an Angstrom number\n");
    }
    else
    {
        printf("The given number is not an Angstrom number\n");
    }
}
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    is_ang(a);
}