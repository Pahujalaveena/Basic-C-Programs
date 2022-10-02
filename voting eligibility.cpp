#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int age;
	cout<<"Checking voting eligibility:"<<endl;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"You are eligible to vote:"<<endl;
	}
	else
	{
		cout<<"You are not eligible to vote:"<<endl;
	}
	cout<<"THANK YOU!!"<<endl;
	return 0;
}