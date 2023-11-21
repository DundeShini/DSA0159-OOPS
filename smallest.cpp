#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the a value:";
	cin>>a;
	cout<<"enter the b value:";
	cin>>b;
	cout<<"enter the c value:";
	cin>>c;
	if(a<b && a<c)
	{
		cout<<"a is smallest number";
	}
	else if(b<a && b<c)
	{
		cout<<"b is smallest number";
	}
	else
	{
		cout<<"c is smallest number";
	}
 return 0;
}
