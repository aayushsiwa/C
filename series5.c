//wap to print n terms of (1.5,3.0,4.5,6.0,...)
#include<stdio.h>
int main()
{
    float i,n,a=0;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        a+=1.5;
// or printf("%.1f ",1.5*i);        
        printf("%.1f ",a);
    }
}