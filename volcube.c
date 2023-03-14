#include<stdio.h>

int vol(int side)
{
    int vol;
    vol=side*side*side;
    printf("The volume of cube is %d",vol);
    return 0;
}

int main()
{
    int side;
    printf("Enter the side of the cube:");
    scanf("%d",&side);
    vol(side);
    return 0;
}