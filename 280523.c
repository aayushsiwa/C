//wap to print size of different types of pointer variables
#include<stdio.h>
int main()
{
    int x=10;
    int *y;
    y=&x;
    printf("value of x %d\n",x);
    printf("address of x %u\n",&x);
    printf("address of x in  y %u\n",y);
    printf("this '*' goes to y, finds address of x,\n gets the value stored at that address %d\n",*y);
    printf("adress of variable y %u\n",&y);
}