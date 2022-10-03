#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d,e,total;
	float avg;
	cout<<"Results are out!!"<<endl;
	cout<<"Enter the marks of Maths,English,Hindi,Science and Economics"<<endl;
	cin>>a>>b>>c>>d>>e;
	total=a+b+c+d+e;
	avg=total/5;
	if(avg>=33)
	{
	   cout<<"Pass!"<<endl;	
	}
	else
	{
		cout<<"Fail!!"<<endl;
	}
	return 0;
}
