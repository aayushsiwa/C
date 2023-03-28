//wap to input 15 numbers from user and check if they are divisible by 5 and 
//if divisible, display all numbers that end with digit 5 and 
//the numbers that end with digit 0
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter 15 numbers:\n");
    for (i=0;i<15;i++)
    {
        printf(":");
        scanf("%d",&n);
        if (n%5==0)
        {
            if (n%10==0)
            {
                printf("Last digit \"0\"\n",n);
            }
            else if (n%10==5)
            {
                printf("Last digit \"5\"\n",n);
            }
        }
    }
}