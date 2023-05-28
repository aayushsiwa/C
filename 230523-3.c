//wap to perform sum of two numbers using pointer and dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x,*y,sum;
    x=(int*)malloc(sizeof(int));
    y=(int*)malloc(sizeof(int));
    printf("Enter\n");
    scanf("%d %d",x,y);
    sum=*x+*y;
    printf("%d",sum);
}