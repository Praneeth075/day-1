#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a,b;
	cout<<"enter the user name:";
	cin>>a;
	cout<<"\n re enter user name:";
	cin>>b;
	if(a==b)
	{
		cout<<"valid user name";
	}
	else
	{
		cout<<"invalid user name";
	}
}
