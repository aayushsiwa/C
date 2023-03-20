//wap to print first n terms of (1, 2, 4, 7, 11,...)
#include<stdio.h>
int main()
{
    int a=1,b=1,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    while(a!=n+1)
    {
        printf("%d ",b);
        b+=a;
        a+=1;
    }

}