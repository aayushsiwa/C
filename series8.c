//wap to print n terms of (4,16,36,64,...)
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",4*i*i);
    }
}