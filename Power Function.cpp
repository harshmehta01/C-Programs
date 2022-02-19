#include<iostream>
using namespace std;
double power(double m,int n=2)
{
	double x=1;
	for(int i=1; i<=n;i++)
		x = x*m;
	return x;
}
int main()
{
	int m,ch;
	double n,r;
	cout<<"Enter the value: ";
	cin >> m;
	cout << "Enter 1 to enter power or 0 to use default power: ";
    cin >> ch;
    if(ch==0)
    {
        cout <<double(power(m));   
        return 0;
    }
	cout<<"Enter the power: ";
	cin>>n;
	r = power(m,n);
	cout<<"Result is: "<<r;
	r = power(m);
	return 0;
}

