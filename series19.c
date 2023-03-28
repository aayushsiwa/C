//wap to print sum of n terms of (a/2+a/5+a/8+...)
#include<stdio.h>
int main()
{
    float i,n,a,sum=0,b=2;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    for (i=1;i<=n;i++)
    {
        sum+=(a/(b));
        b+=3;
    }
    printf("%f",sum);
}