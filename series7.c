//wap to print n terms of (1,9,25,49,...)
#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        a=(2*i)+1;
        if (a%2!=0)
        {
            printf("%d ",a*a);
        }
    }
}