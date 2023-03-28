//wap to print sum of n terms of (a2+a2/2+a2/3+...)
#include<stdio.h>
int main()
{
    float i,n,a,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    for (i=1;i<=n;i++)
    {
        sum+=((a*a)/i);
    }
    printf("%f",sum);
}