#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	char alpha;
	cout<<"Vowel Check!!"<<endl;
	cout<<"Enter the character"<<endl;
	cin>>alpha;
	switch(alpha)
	{
		case 'A':
		case 'E':
		case 'O':
		case 'I':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Vowel!!!"<<endl;
			break;
		default:
		    cout<<"Invalid Input"<<endl;
	}
	return 0;
}