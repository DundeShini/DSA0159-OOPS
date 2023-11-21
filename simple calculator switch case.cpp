#include<iostream>
using namespace std;
int main()
{
	char op;
    float a,b;
    cout<<"enter the operator:";
    cin>>op;
	cout<<"enter the a value:";
	cin>>a;
	cout<<"enter the b value:";
	cin>>b;
	switch(op)
	{
		case '+':
		cout<<a<<"+"<<b<<"="<<a+b;
		break;
		
		case '-':
		cout<<a<<"-"<<b<<"="<<a-b;
		break;
		
		case '*':
		cout<<a<<"*"<<b<<"="<<a*b;
		break;
		
		case '/':
		cout<<a<<"/"<<b<<"="<<a/b;
		break;
	}
	return 0;
}
