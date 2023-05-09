//wap to single code for addition, subtraction, multiplication of 2d array
#include<stdio.h>
int add(int a[50][50],int b[50][50],int n)
{
    int i,j;
    printf("\nThe new matrix is:\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]+b[i][j]);
        }
    }
}
int subtract(int a[50][50],int b[50][50],int n)
{
    int i,j;
    printf("\nThe new matrix is:\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]-b[i][j]);
        }
    }
}
int mult(int a[50][50],int b[50][50],int n)
{
    int i,j,k,c[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            c[i][j]=0;
            for (k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nThe new matrix is:\n");
    for (i=0;i<n;i++)
    {
        printf("\n");
        for (j=0;j<n;j++)
        {
            printf("%d  ",c[i][j]);
        }
    } 
}
int main()
{
    int a[50][50],b[50][50];
    int n,i,j;
    char o;
    printf("Enter your choice\n+\n-\n*\n:");
    scanf("%c",&o);
    printf("Enter the size of the matrices:");
    scanf("%d",&n);
    printf("For matrix 1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the %d %d element:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("For matrix 2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the %d %d element:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    switch (o)
    {
        case ('+'):
        {
            add(a,b,n);
            break;
        }
        case('-'):
        {
            subtract(a,b,n);
            break;
        }
        case('*'):
        {
            mult(a,b,n);
            break;
        }
    }
}