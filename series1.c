//wap to print first n terms of (1, 4, 9, 16,...).
#include<stdio.h>
int main()
{
    int a=0,b=1,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        a+=b;
        printf("%d ",a);
        b+=2;
    }
}