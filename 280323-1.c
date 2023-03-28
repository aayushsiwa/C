//wap to take 3 numbers from user and print the greatest
#include<stdio.h>
int max_3(int a,int b,int c)
{
    int max;
    if (a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
    printf("The greatest number is %d",max);
}
int main()
{
    int x,y,z;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&x,&y,&z);
    max_3(x,y,z);
}