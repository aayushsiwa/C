//wap to check whether an integer is perfect number or not
#include<stdio.h>
int isperf(int a)
{
    int i,s=0;
    for (i=1;i<a;i++)
    {
        if (a%i==0)
        {
            s=s+i;
        }
    }
    if (s==a)
    {
        printf("Perfect");
    }
    else printf("Not Perfect");
}
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    isperf(a);
}