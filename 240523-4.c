//wap to to find the largest element using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x,*y,max;
    x=(int*)malloc(sizeof(int));
    y=(int*)malloc(sizeof(int));
    printf("Enter two numbers:");
    scanf("%d %d",x,y);
    if(*x>*y)
    {
        printf("%d",*x);
    }
    else if(*y>*x)
    {
        printf("%d",*y);
    }
    else
    {
        printf("Both are equal");
    }
}