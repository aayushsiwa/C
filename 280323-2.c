//wap to check if a number is even or odd
#include<stdio.h>
int is_oe(int n)
{
    if (n%2==0)
    {
        return 0;
    }
}
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if (is_oe(a)==0)
    {
        printf("%d is an even number",a);
    }
    else
    {
        printf("%d is an odd number",a);
    }
}