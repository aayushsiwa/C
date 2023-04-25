//wap to perform multiplication of two matrices
#include<stdio.h>
int main()
{
    int A[50][50],B[50][50],C[50][50];
    int i,j,r,k;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the elements of the 1st matrix: \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            scanf("%d",&A[i][j]);
        }
    } 
    printf("Enter the elements of the 2nd matrix: \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            scanf("%d",&B[i][j]);
        }
    } 
    printf("A:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            printf("%d  ",A[i][j]);
        }
    } 
    printf("B:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            printf("%d  ",B[i][j]);
        }
    } 
    printf("The multiplication of the two matrices:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            C[i][j]=0;
            for (k=0;k<r;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }     
    printf("C:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            printf("%d  ",C[i][j]);
        }
    } 
}