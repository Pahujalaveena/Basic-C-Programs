#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Greatest of three numbers!"<<endl;
	cout<<"Enter the three numbers!"<<endl;
	cin>>a>>b>>c;
	if
	(a>b &&a>c)
	{
		cout<<"First number is the greatest!"<<endl;
	}
	else if(b>a && b>c)
	{
		cout<<"Second number is the greatest!"<<endl;
	}
	else
	{
		cout<<"Third number is the greatest!"<<endl;
	}
	return 0;
}