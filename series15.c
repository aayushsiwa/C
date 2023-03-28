//wap to print sum of n terms of (a2,a3,a4,...)
//wap to print sum of n terms of (a+a2+a3+...)
#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,a,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    for (i=1;i<=n;i++)
    {
        sum+=pow(a,i);
    }
    printf("%f",sum);
}