//sum of array using function
#include<stdio.h>
int soa(int a[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("---->%d",s);
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    soa(a,5);
}