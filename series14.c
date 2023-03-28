//wap to print sum of n terms of (a*2+a*3+a*4+...)
#include<stdio.h>
int main()
{
    float i,n,a,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    for (i=2;i<=n+1;i++)
    {
        sum+=(a*i);
    }
    printf("%f",sum);
}