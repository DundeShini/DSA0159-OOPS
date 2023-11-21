#include<iostream>
using namespace std;
int main()
{
	int n,i,r,sum=0;
	cout<<"enter the value:";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<sum;
}
