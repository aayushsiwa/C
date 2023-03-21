//wap to print sum of n terms of (1*2+2*3+...+19*20)
#include<stdio.h>
int main()
{
    float i,sum=0,n;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    for (i=1;i<=n-1;i++)
    {
        sum+=(i)*(i+1);
    }
    printf("%f",sum);
}