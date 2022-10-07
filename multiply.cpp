#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n,f,multi=1;
	cout<<"Multiplication of digits"<<endl;
	cout<<"Enter the number"<<endl;
	cin>>n;
	while(n>0)
	{
		f=n%10;
		multi=multi*f;
		n=n/10;
	}
	
	cout<<"Result is :"<<multi<<endl;
}