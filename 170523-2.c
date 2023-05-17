//wap to add 2 complex numbers by passing structure to a function.
#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};
int sum(struct complex b[100],int n)
{
    int sr=0,si=0;
    for(int i=0;i<n;i++)
    {
        sr+=b[i].real;
        si+=b[i].imaginary;
    }
    printf("Sum is\n%d + (%d)i",sr,si);
}
int main()
{
    struct complex b[100];
    int n;
    printf("Enter the number of complex numbers:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("For %d\n",i+1);
        printf("Real part:");
        scanf("%d",&b[i].real);
        printf("Imaginary part:");
        scanf("%d",&b[i].imaginary);
    }
    sum(b,n);
}