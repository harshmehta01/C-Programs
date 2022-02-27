#include<iostream>
#include<math.h>
using namespace std;
class point
{
    int x,y;
    
    public:
    void getdata();
    void print();
    float length(point p);
};
void point::getdata()
{
    cout<<"\nEnter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
}
void point::print()
{
    cout<<"\nThe value of x is: "<<x<<endl;
    cout<<"The value of y is :"<<y<<endl;
}
float point::length(point p1)
{
    float l;
    l=sqrt(pow(x-p1.x,2)+pow(y-p1.y,2));
    return l;
}
int main()
{
    point p1,p2;
    p1.getdata();
    p1.print();
    p2.getdata();
    p2.print();
    cout<<p1.length(p2);
}
