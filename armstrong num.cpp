//armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	int sum=0;
	int originalno=n;
	while(n>0)
	{
		int last_digit=n%10;
		sum=sum+pow(last_digit,3);
		n=n/10;
	}
	if(sum==originalno)
	{
		cout<<"Armstrong Number"<<endl;
	}
	else
	{
		cout<<"Not Armstrong Number"<<endl;
	}
	
}