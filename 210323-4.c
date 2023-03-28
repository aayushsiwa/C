//wap to print sum of n terms of (1/2+2/3+3/4+...+19/20)
#include<stdio.h>
int main()
{
    float a=0,i,sum=0,n;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    for (i=1;i<n;i++)
    {
        sum+=((i)/(i+1));   
    }
    printf("%.5f",sum);
}