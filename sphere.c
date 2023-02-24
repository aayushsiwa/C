#include<stdio.h>

#define pi 3.1416

int area(float r)
{
    float a;
    a=(4)*pi*r*r;
    printf("The area of the sphere is %.2f\n",a);
    return 0;
}

int vol(float r)
{
    float v;
    v=1.34*pi*r*r*r;
    printf("The volume of the sphere is %f",v);
    return 0;
}

int main()
{
    int r;
    printf("Enter the radius of the sphere:");
    scanf("%d",&r);
    area(r);
    vol(r);
    return 0;
}