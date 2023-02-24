#include<stdio.h>

int sq(int n)
{
    n=n*n;
    printf("Square is %d",n);
    return 0;
}

int cube(int n)
{
    n=n*n*n;
    printf("Cube is %d",n);
    return 0;
}


int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    sq(n);
    cube(n);
    return 0;
}