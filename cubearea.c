#include<stdio.h>


int cube(int side)
{
    int sa, csa;
    sa=6*side*side;
    csa=4*side*side;
    printf("Surface area of cube is %d\n",sa);
    printf("Curved surface are of cube is %d",csa);
    return 0;
}

int main()
{
    int side;
    printf("Enter the side of the cube:");
    scanf("%d",&side);
    cube(side);
    return 0;
}