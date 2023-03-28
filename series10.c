//wap to print n terms of (24,99,224,399,...)
#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        a=((5*i)*(5*i))-1;
        printf("%d ",a);
    }
}