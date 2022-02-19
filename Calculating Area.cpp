#include<iostream>
using namespace std;
float triangle(int b,int h)
{
    return 0.5*b*h;
}
float circle(int r)
{
    return 3.14*r*r;
}
int main()
{
    int b,h,r;
    cout<<"Enter the breadth of triangle: ";
    cin>>b;
    cout<<"Enter the height of triangle: ";
    cin>>h;
    cout<<"Area of Triangle: "<<triangle(b,h);
    cout<<"\n\nEnter the radius of circle: ";
    cin>>r;
    cout<<"Area of Circle: "<<circle(r);
    return 0;
}

