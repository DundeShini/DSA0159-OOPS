#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	cout<<"enter the operator:";
	cin>>op;
	switch(op)
	{
		case'+':
			cout<<a+b;
			break;
		case'-':
			cout<<a-b;
			break;
		case'*':
			cout<<a*b;
			break;
		case'/':
			cout<<a/b;
			break;
	    case'%':
	    	cout<<a%b;
	    	break;
	}
	return 0;
}
