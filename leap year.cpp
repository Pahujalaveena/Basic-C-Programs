#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"LEAP YEAR!!"<<endl;
	cout<<"Enter the year:"<<endl;
	cin>>year;
	if(year%4==0)
	{
		cout<<"It is a leap year!"<<endl;
	}
	else
	{
		cout<<"It is not a leap year!"<<endl;
	}
	return 0;
}
