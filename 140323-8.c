//wap to check whether an integer is perfect number or not
#include<stdio.h>
int main()
{
    int a,i,s;
    scanf("%d",&a);
    s=0;
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
    else printf("Not");
}