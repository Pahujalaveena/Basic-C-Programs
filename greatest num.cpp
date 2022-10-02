#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y;
	cout<<"Checking which number is greater:"<<endl;
	cout<<"Enter the two numbers"<<endl;
	cin>>x>>y;
	if(x>y)
	{
		cout<<"First number is greater i.e.,"<<x<<endl;
	}
	else
	{
		cout<<"Second number is greater i.e.,"<<y<<endl;
	}
	return 0;
}