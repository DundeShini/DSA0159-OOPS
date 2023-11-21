#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a value:";
	cin>>a;
	cout<<"enter b value:";
	cin>>b;
	cout<<"enter c value:";
	cin>>c;
	cout<<endl;
	if(a>b & a>c)
	cout<<a<<" is greatest";
	else if(b>a & b>c)
	cout<<b<<"is greatest";
	else
	cout<<c<<"is greatest";
return 0;	
}
