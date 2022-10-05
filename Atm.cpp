#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	int amt=10000,cre,deb;
	char choice;
	cout<<"Welcome!!"<<endl;
	cout<<"Choose your option"<<endl;
	cout<<"A for Current Amount\nC for Credit\nD for Debit\nE for Exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 'A':
			{
				cout<<"The current amount is:"<<amt<<endl;
				break;
			}
		case 'C':
			{
				cout<<"Enter the credit amount:"<<endl;
				cin>>cre;
				cout<<"The total amount is :"<<amt+cre<<endl;
				break;
			}
		case 'D':
			{
				cout<<"Enter the debit amount:"<<endl;
				cin>>deb;
				cout<<"The total amount is"<<amt-deb<<endl;
				break;
			}
		case 'E':
			{
				cout<<"Thank You!!"<<endl;
				break;
			}
		default:
			{
				cout<<"Invalid input"<<endl;
			}
			
			
	}
	return 0;
}