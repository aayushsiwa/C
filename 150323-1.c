//wap to find the first n numbers of fibbonaci sequence(0,1,1,2,3,5,8,...)
#include<stdio.h>
int fibonacci(int n)
{
    int sum=0,nth,n1=0,n2=1;
    if (n<=0)
    {
        printf("Incorrect Input");
    }
    else if (n==1)
    {
        printf("%d",n1);
    }
    else
    {
        while (sum < n)
        {
            printf("%d",n1);
            nth=n1+n2;
            n1=n2;
            n2=nth;
            sum+= 1;
        }       
}

}
int main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    fibonacci(n);
}