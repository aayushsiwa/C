//wap to check whether a number is a Krishnamurthy number
#include<stdio.h>
int fact(int n)
{
    int f;
    f=1;
    for (n==n;n>0;n--)
    {
        f=f*n;
    }
    return f;
}
int is_kris(int n)
{
    int b,s=0,i=n;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        s+=fact(b);
    }
    if (s==i)
    {
        printf("%d is a Krishnamurthy number",i);
    }
    else
    {
        printf("%d is not a Krishnamurthy number",i);
    }
}
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);   
    is_kris(a); 
}