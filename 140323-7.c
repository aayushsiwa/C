//wap to check whether a given number is prime or not
#include<stdio.h>
int isprime(int a)
{
    int b=1,i;
    if (a<=1)
    {
        b=0;
    }
    for (i=2;i<a;i++)
    {
        if (a%i==0)
        {
            b=0;
        }
        else
        {
        }
    }   
    if (b==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
int main()
{
    int a;
    printf("Enter the number to check if prime or not:\n");
    scanf("%d",&a);
    isprime(a);
}