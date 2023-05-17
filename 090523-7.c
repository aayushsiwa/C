//wap to find trace of a matrix
#include<stdio.h>
int main()
{
    int n,i,j,a[50][50],t=0;
    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the %d %d element:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==j)
            {
                t+=a[j][j];
            }
        }
    }
    printf("The trace of the given matrix is %d",t);
}