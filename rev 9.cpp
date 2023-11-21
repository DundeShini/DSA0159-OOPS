#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a value:";
	cin>>a;
	cout<<"enter b value:";
	cin>>b;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"after swapping a value:"<<a;
	cout<<endl;
	cout<<"after swapping b value:"<<b;
return 0;
}
