//wap to print n terms of (2,5,10,17,...)
#include<stdio.h>
int main()
{
    int i,n,a=2;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",a);
        a+=(2*i)+1;
    }
}