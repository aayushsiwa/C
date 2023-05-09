//wap to print transpose of a matrix
#include<stdio.h>
int main()
{
    int a[50][50],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the %d %d element:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Now the %d %d element is:%d\n",i+1,j+1,a[j][i]);
        }
    }
}