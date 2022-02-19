#include<iostream>
using namespace std;
class number
{
    int i;
    
    public:
    void input();
    void increment();
    void decrement();
};
void number::input()
{
    cout<<"Enter the number: ";
    cin>>i;
}
void number::increment()
{
  cout<<"The incremented value is: "<<++i;
}
void number::decrement()
{
  cout<<"\nThe decremented value is: "<<--i;
}
int main()
{
    number n1;
    n1.input();
    n1.increment();
    n1.decrement();
}

