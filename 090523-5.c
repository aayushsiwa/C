//wap to find freq of even and odd numbers in a matrix
#include<stdio.h>
int main()
{
    int a[50][50],i,j,n,e=0,o=0;
    printf("Enter the size of the matrix:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the %d %d element:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }  
    }
    printf("Frequency of even numbers is %d\n",e);
    printf("Frequency of odd numbers is %d",o);
}