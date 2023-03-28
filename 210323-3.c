//wap to print sum of n terms of (1+1/3+1/5+...1/19)
#include<stdio.h>
int main()
{
    float i,sum=0,n;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    for (i=1;i<=n/2;i++)
    {
        sum+=1/(2*i-1);
    }
    printf("%.5f",sum);
}