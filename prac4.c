//wap to input 15 numbers (both positive and negative) from user and print the 
//sum of negative numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter 15 numbers both positive and negative:\n");
    for (i=0;i<15;i++)
    {
        printf(":");
        scanf("%d",&n);
        if (n<0)
        {
            sum+=n;
        }
    }
    printf("The sum of all negative numbers given is %d.",sum);
}