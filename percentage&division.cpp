#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int per;
	cout<<"Enter your percentage!"<<endl;
	cin>>per;
	if(per>=90)
	{
		cout<<"First Division!!"<<endl;
	}
	else if(per>=60 && per<90)
	{
		cout<<"Second Division!!"<<endl;
	}
	else if(per<60 && per>=45)
	{
		cout<<"Third Division!!"<<endl;
	}
	else 
	{
		cout<<"NEED TO WORK HARD!!"<<endl;
	}
	return 0;
}