//wap to find the sum of diagonal elements of a matrix
#include<stdio.h>
int main()
{
    int A[50][50];
    int i,j,r,s=0;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the elements of the 1st matrix: \n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<r;j++)
        {
            scanf("%d",&A[i][j]);
            if (i==j)
            {
                s+=A[i][j];
            }
        }
    } 
    printf("Sum of diagonal elements=%d",s);
}