//wap to check if a matrix is sparse matrix or not
#include<stdio.h>
int main()
{
    int z=0,i,j,a[50][50],n,e;
    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    e=n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the %d %d element:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                z++;
            }
        }
    }
    if(z>=e)
    {
        printf("The given matrix is a sparse matrix");
    }
    else
    {
        printf("The given matrix is not a sparse matrix");
    }
}