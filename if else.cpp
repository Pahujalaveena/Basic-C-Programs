#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	if(n>0)
	{
		cout<<"Number is positive!"<<endl;
	}
	else if(n<0)
	{
		cout<<"Number is negative!"<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
	return 0;
}
