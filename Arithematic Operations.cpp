#include <iostream>
using namespace std;
int main() 
{
    float a,b;
    char x,ch;
    do
    {
        cout<<"What arithmetic operation do you want to perform?:\n";
        cout<<"Press 1 for addition\n" ;
        cout<<"Press 2 for subtraction\n";
        cout<<"Press 3 for multiplication\n";
        cout<<"Press 4 for division\n";
        cout<<"\nEnter a number: ";
        cin>>x;
        cout <<"\nEnter first operand: ";
        cin>>a;
        cout <<"Enter second operand: ";
        cin>>b;
        switch(x) 
        {
            case '1':
            cout<<"Answer is: "<<a+b;
            break;
            case '2':
            cout<<"Answer is: "<<a-b;
            break;
            case '3':
            cout<<"Answer is: "<<a*b;
            break;
            case '4':
            cout<<"Answer is: "<<a/b;
            break;
            default:
            cout<<"Operator is not correct";
            break;
        }
        cout<<"\n\nDo you want to Continue(y/n)?";
        cin>>ch;
    }
    while(ch!='n' && ch!='N');
    return 0;
}


