//wap to print sum of n terms of (1/2+1/4+1/8+1/16+...)
#include<stdio.h>
int main()
{
    float i,sum=0,n,a=2;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        sum+=1/a;
        a*=2;
    }
    printf("%.5f",sum);
}