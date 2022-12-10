#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int ch,num1,num2;
	cout<<"..........CALCULATOR............."<<endl;
	cout<<"1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Exit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>ch;
	while(ch!=5)
	{
		cout<<"Enter two numbers separated by spaces:"<<endl;
		cin>>num1>>num2;
		switch(ch)
		{
			case 1:
				{
					num1=num1+num2;
					cout<<"Addition is: "<<num1<<endl;
					break;
				}
			case 2:
				{
					num1=abs(num1-num2);
					cout<<"Subtraction is:"<<num1<<endl;
					break;
				}
			case 3:
				{
					num1=num1/num2;
					cout<<"Division is: "<<num1<<endl;
					break;
				}
			case 4:
				{
					num1=num1*num2;
					cout<<"Multiplication is :"<<num1<<endl;
					break;
				}
			default:
				cout<<"Enter valid input:"<<endl;
		}
	}
}