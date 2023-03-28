//wap to display all the numbers between m and n input from user check and print 
//the numbers that are perfect square.
#include<stdio.h>
#include<math.h>
int main()
{
    int min,max,i,n;
    printf("Enter the minima:\n");
    scanf("%d",&min);
    printf("Enter the maxima:\n");
    scanf("%d",&max);
    for (i=min;i<=max;i++)
    {
        for (n=0;n<=100;n++)
        {
            if(i%n==0)
            {
                printf("%d",i);
            }
        }
    }
}
