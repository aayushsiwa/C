//wap to perform addition of two matrices
#include<stdio.h>
int main()
{
    int A[50][50],B[50][50],C[50][50];
    int i,j,r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    printf("Enter the elements of the 1st matrix: \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    } 
    printf("Enter the elements of the 2nd matrix: \n");
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    } 
    printf("A:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d  ",A[i][j]);
        }
    } 
    printf("B:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d  ",B[i][j]);
        }
    } 
    printf("The addition of the two matrices:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d   ",C[i][j]);
        }
    }     

}