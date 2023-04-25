//wap to calculate the factorial of a given number
#include<stdio.h>
int fact(int i)
{
    int f=1;
    for (i==i;i>0;i--)
    {
        f=f*i;
    }
    printf("The factorial of the given number is %d.",f);
}
int main()
{
    int i;
    printf("Enter the number:\n");
    scanf("%d",&i);
    fact(i);
}