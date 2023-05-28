//wap to store n elements in an array using dynamic memory allocation and display result using pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *a;
    printf("Enter the size of array:");
    scanf("%d",&n);
    a=(int*)malloc(n * sizeof(int));
    if(a==NULL)
    {
        return 1;
    }
    for (i = 0; i < n; i++) 
    {
        printf("Enter the %d elemnet:",i);
        scanf("%d", a + i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d element is %d\n",i,*(a+i));
    }
}