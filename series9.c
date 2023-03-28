//wap to print n terms of (0,3,8,15,...)
#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",a);
        a+=(2*i)+1;
    }
}