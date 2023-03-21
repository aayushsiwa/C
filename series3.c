//wap to print first n terms of (3, 6, 9, 12,...)
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",3*i);
    }
}