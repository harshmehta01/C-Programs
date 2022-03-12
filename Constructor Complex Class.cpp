#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    int r,i;
    
    public:
    void display();
    complex();
    complex(int a);
    complex(int a,int b);
    complex(complex&c);
    complex operator+(complex c);
    complex operator-(complex c);
    complex operator*(complex c);
};
void complex::display()
{
    cout<<"\nComplex value is: "<<r<<"+"<<i<<"i";
}
complex::complex()
{
    r=i=0;
}
complex::complex(int a)
{
    r=i=a;
}
complex::complex(int a,int b)
{
    r=a;
    i=b;
}
complex::complex(complex&c)
{
    r=c.r;
    i=c.i;
}
complex complex::operator+(complex c)
{
    complex temp;
    temp.r=r+c.r;
    temp.i=i+c.i;
    return temp;
}
complex complex::operator-(complex c)
{
    complex temp;
    temp.r=r-c.r;
    temp.i=i-c.i;
    return temp;
}
complex complex::operator*(complex c)
{
    complex temp;
    temp.r=(r*c.r)-(i*c.i);
    temp.i=(r*c.i)+(i*c.r);
    return temp;
}
int main()
{
    complex v1,v2,v3,v4,v5,v6,v7,v8,v9,c1,c2(5),c3(5,10),c4(c3);
    cout<<"Values before operations: "<<endl;
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    
    v1=c1+c2;
    v2=c1-c2;
    v3=c1*c2;
    
    v4=c2+c3;
    v5=c2-c3;
    v6=c2*c3;
    
    v7=c3+c4;
    v8=c3-c4;
    v9=c3*c4;
    
    cout<<"\n\nValues after operations: "<<endl;
    v1.display();
    v2.display();
    v3.display();
    v4.display();
    v5.display();
    v6.display();
    v7.display();
    v8.display();
    v9.display();
}
