//wap to get largest element of an array using user defined function
#include<stdio.h>
int largest(int a[100],int n)
{
    int l=a[0],i;
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    printf("The largest number in the array is %d",l);
}
int main()
{
    int n,i,a[100];
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&a[i]);
    }
    largest(a,n);
}