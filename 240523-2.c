//wap to to find the factorial of a given number using pointer
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    int *p;
    printf("Enter the number:");
    scanf("%d",&n);
    *p=n;
    for(i=0;i<n;i++)
    {
        fact*=*p-i;
    }
    printf("The factorial of %d is %d",n,fact);
}