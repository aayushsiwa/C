//wap to print sum of n terms of (1+(1*2)+(1*2*3)+...)
#include<stdio.h>
int main()
{
    int i,sum=0,n,a=1;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        a*=i;
        sum+=a;
    }
    printf("%d",sum);
}