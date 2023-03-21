//wap to print sum of n terms of (2-4+6-8+...–20)
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum+=(-1)*(2*i);
        }
        else
        {
            sum+=(2*i);
        }
    }
    printf("%d",sum);
}