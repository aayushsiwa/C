//wap to swap two numbers using callby referance
#include<stdio.h>
int swap(int *a,int *b)
{
    int x;
    x=*a;
    *a=*b;
    *b=x;
}
int main()
{
    int a,b;
    printf("Enter two numbers that you want to swap with each other\n");
    scanf("%d %d",&a,&b);
    printf("Old Values:\n1st=%d\n2nd=%d\n",a,b);
    swap(&a,&b);
    printf("The new 1st number is %d\n",a);
    printf("The new 2nd number is %d",b);
}