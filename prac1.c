//wap to input 15 numbers (both positive and negative) from user and print the 
//count of postitive numbers.
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter 15 numbers both positive and negative:\n");
    for (i=0;i<15;i++)
    {
        printf(":");
        scanf("%d",&n);
        if (n>0)
        {
            count+=1;
        }
    }
    printf("There are %d positive numbers.",count);
}