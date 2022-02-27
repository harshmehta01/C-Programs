#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    int r;
    int i;
    
    public:
    void getdata();
    void print();
    complex add(complex c);
    complex subtract(complex c);
    complex multiply(complex c);
    complex division(complex c);
};
void complex::getdata()
{
    cout<<"\nEnter the real value: ";
    cin>>r;
    cout<<"Enter the imaginary value: ";
    cin>>i;
}
void complex::print()
{
    cout<<"\nComplex value is: "<<r<<"+"<<i<<"i"<<endl;
}
complex complex::add(complex c)
{
    complex temp;
    temp.r=r+c.r;
    temp.i=i+c.i;
    return temp;
}
complex complex::subtract(complex c)
{
    complex temp;
    temp.r=r-c.r;
    temp.i=i-c.i;
    return temp;
}
complex complex::multiply(complex c)
{
    complex temp;
    temp.r=(r*c.r)-(i*c.i);
    temp.i=(r*c.i)+(i*c.r);
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c1.print();
    c2.getdata();
    c2.print();
    c3=c1.add(c2);
    c3.print();
    c3=c1.subtract(c2);
    c3.print();
    c3=c1.multiply(c2);
    c3.print();
}


