#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	float a[50],sum=0,mean,SD,Var,Varsum=0;
	int  i,n;
	cout << "Enter the size of array=  ";
	cin >> n;
	cout << "Enter the numbers: ";
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}	
	for(i = 0; i < n; i++)
	{
		sum=sum+a[i];
	}
	mean=sum/(float)n;
	for(i=0;i<n;i++)
	{
		Varsum+=(a[i]-mean)*(a[i]-mean);
	}
	Var=Varsum/(float)n;
	SD = sqrt(Var);
	cout << "\nMean= "<<mean;
	cout << "\nVarience= "<<Var;	
	cout << "\nStandard deviation= "<<SD;
	return 0;
}


