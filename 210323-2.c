//wap to print sum of first n terms of {1+(1/2)+(1/3)+...+(1/20)}
#include<stdio.h>
int main()
{
    float a,sum=0,n;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    for (a=1;a<=n;a++)
    {
        sum+=(1/a);
    }
    printf("%.5f",sum);
}