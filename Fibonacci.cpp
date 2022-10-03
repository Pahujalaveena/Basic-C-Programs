//fibonacci series
#include<iostream>
using namespace std;
int main()
{
	int n,t=0,t1=1,sum=0;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
    {
	cout<<t<<" ";
	sum=t+t1;
	t=t1;
	t1=sum;
}
return 0;
}