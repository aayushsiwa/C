//wap to calculate the sum of all odd numbers and even numbers between a range of numbers 
//from m to n (both inclusive) where m < n. Input m and n (where m<n).
#include<stdio.h>
int main()
{
    int max,min,sume=0,sumo=0,i;
    printf("Enter the minimum:\n");
    scanf("%d",&min);
    printf("Enter the maximum:\n");
    scanf("%d",&max);
    for (i=min;i<=max;i++)
    {
        if (i%2==0)
        {
            sume+=i;
        }
        else
        {
            sumo+=i;
        }
    }
    printf("The sum of even numbers is %d",sume);
    printf("The sum of odd numbers is %d",sumo);
}