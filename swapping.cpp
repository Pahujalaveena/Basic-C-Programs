#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=9,b=7,temp;
	cout<<"Before swapping"<<endl;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	temp=b;
	b=a;
	a=temp;
	cout<<"After swapping"<<endl;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	return 0;
}