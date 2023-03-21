//wap to print n terms of (0,7,26,...)
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",((i*i*i)-1));
    }
}