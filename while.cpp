#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int fact=1,n,i=1;
	cout<<"Enter the number!"<<endl;
	cin>>n;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<"The factorial is:"<<fact<<endl;
	return 0;
}