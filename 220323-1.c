//wap to print all angstrom numbers between a range given by user
#include<stdio.h>
int is_ang(int n)
{
    int i,a=n,b,c=0,sum=0;
    while(n>0)
    {
        b=n%10;
        c=c*10+b;
        n=n/10;
        sum+=b*b*b;
    }
    if (sum==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int min,max,i;
    printf("Enter the minimum and maximum range:\n");
    scanf("%d%d",&min,&max);
    for (i=min;i<=max;i++)
    {
        if (is_ang(i)==1)
        {
            printf("%d\n",i);
        }
    }
}
