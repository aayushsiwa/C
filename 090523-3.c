//wap to check if a matrix is an identity matrix or not
#include<stdio.h>
int iden(int a[50][50],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                return 0;
            }
            else if(i!=j && a[i][j]!=0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int a[50][50],n,i,j,b;
    printf("Enter the size of matrix:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the %d %d element:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    if(iden(a,n))
    {
        printf("Is Identity");
    }
    else
    {
        printf("Not Identity");
    }
}   