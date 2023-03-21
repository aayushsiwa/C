//wap to print sum of series (1+4+9+....+400)
#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {
        sum+=a*a;
    }
    printf("%d",sum);
}