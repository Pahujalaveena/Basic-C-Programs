#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,fact=0;
	cout<<"Prime or not!!"<<endl;
	cout<<"Enter the number"<<endl;
	cin>>n;
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			fact++;
		}
		i++;
	}
	if(fact==2)
	{
		cout<<"Prime Number "<<endl;
	}
	else
	{
		cout<<"Not Prime"<<endl;
	}
	return 0;
}