#include<iostream>
#include<conio.h>
using namespace std;
void area(float r)
{
	float a;
	a=3.14*r*r;
	cout<<"Area is:"<<a<<endl;
}
int main()
{
	int rad;
	cout<<"Enter the radius!"<<endl;
	cin>>rad;
	area(rad);
}