#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	float div;
	cout<<"Calculations!!"<<endl;
	cout<<"Enter.................\n1 for Addition\n2 for Subtraction \n3 for Division \n4 for Multiplication"<<endl;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"Enter your choice!!"<<endl;
	cin>>c;
	div=a/b;
	switch(c)
	{
		case 1:
			{
			
			cout<<"Addition is :"<<a+b<<endl;
			break;
		   }   
		case 2:
		{
			cout<<"Subtraction is :"<<a-b<<endl;
			break;
		}
		case 3:
			{
				cout<<"Division is :"<<div<<endl;
				break;
			}
		case 4:
			{
				cout<<"Multiplication is :"<<a*b<<endl;
				break;
			}
		default:
		cout<<"Invalid Input!!"<<endl;
	
	}
	return 0;
}