#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Even Numbers"<<endl;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		cout<<i<<endl;
	}
	return 0;
}