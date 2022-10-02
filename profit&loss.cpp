#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int cp,sp;
	cout<<"Profit and Loss"<<endl;
	cout<<"Give selling price and Cost price"<<endl;
	cin>>cp>>sp;
	if(cp>sp)
	{
		cout<<"There is profit of "<<cp-sp<<endl;
	}
	else
	{
		cout<<"There is loss of"<<sp-cp<<endl;
	}
	return 0;
}