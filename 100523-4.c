//wap to swap two numbers using function
#include<stdio.h>
int swap(int a,int b)
{
    int t;
    t=b;
    b=a;
    a=t;
    printf("The new 1st number is %d\n",a);
    printf("The new 2nd number is %d",b);
}
int main()
{
    int a,b;
    printf("Enter two numbers that you want to swap with each other\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
}