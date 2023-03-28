//wap to print sum of n terms of (1^2/a+3^2/a^2+5^2/a^3+...)
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
        sum+=(pow((2*i)-1,2)/pow(a,i));
    }
    printf("%f",sum);
}