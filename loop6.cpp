#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum=0,n;
	cout<<"SUM!!"<<endl;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"The sum is:"<<sum<<endl;
	return 0;
}