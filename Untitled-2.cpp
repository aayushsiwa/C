#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a, h, m, s;
    printf("Enter the time in seconds:");
    cin>>a;
    printf("%d",a);
    s=a%60;
    printf("\n%d",s);
    a=a-s;
    printf("\n%d",a);
    h=a/3600;
    printf("\n%d",h);
    m=(a/60)-60;
    printf("\n%d",m);
    printf("\nThe time is %d hours, %d minutes and %d seconds", h, m, s);

}




/*    m=a/60;
    h=m/60;
    printf("The time is %d hours, %d minutes and %d seconds", h, m, s);*/



/*
{
    int l, b, h, a;
    printf("Enter the length:");
    cin>>l;
    printf("Enter the breadth:");
    cin>>b;
    printf("Enter the height:");
    cin>>h;
    a=2*(l*b+b*h+h*l);
    cout<<"The surface area of the cuboid is:"<<a;
    return 0;
}

{
    int x, y, z;
    printf("X=");
    cin>>x;
    printf("Y=");
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<"X="<<x;
    cout<<"\nY="<<y;
    return 0;
}

#define pi 3.1416
{
    int r, c, a;
    printf("Enter the radius of the circle:-");
    cin>>r;
    c=2*pi*r;
    a=pi*r*r;
    cout<<"The cicumference of the circle is:-"<<c;
    cout<<"\nThe area of the circle is:-"<<a;
    return 0;
}



{
    int side, volume;
    printf("Enter side of cube :");
    cin>>side;

    volume=side*side*side;
    cout<<"The volume of the cube is:- "<<volume;
    return 0;
}
*/