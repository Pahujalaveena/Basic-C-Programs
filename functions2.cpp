#include<iostream>
#include<conio.h>
using namespace std;
void add()
{
	int i,j,k;
	cout<<"enter two number"<<endl;
	cin>>i>>j;
	k=i+j;
	cout<<"Addition is:"<<k<<endl;
}
void subtr()
{
	int i,j,k;
	cout<<"enter two number"<<endl;
	cin>>i>>j;
	k=i-j;
	cout<<"Subtraction is:"<<k<<endl;	
}
void division()
{
	int i,j,k;
	cout<<"enter two number"<<endl;
	cin>>i>>j;
	k=i/j;
	cout<<"Division is:"<<k<<endl;	
}
void multi()
{
	int i,j,k;
	cout<<"enter two number"<<endl;
	cin>>i>>j;
	k=i*j;
	cout<<"Multiplication is:"<<k<<endl;	
}


int main()
{
	add();
	subtr();
	multi();
	division();
}