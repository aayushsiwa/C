//wap to print n terms of (4,8,16,32,...)
#include<stdio.h>
int main()
{
    int i,n,a=2;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        a*=2;
        printf("%d ",a);
    }
}