//wap to print size of different types of pointer variables
#include<stdio.h>
int main()
{
    int x=10;
    int *y=&x;
    printf("%d",sizeof(y));
}