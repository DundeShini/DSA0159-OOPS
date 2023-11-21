#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter n value:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count=count++;
	}
	if(count=2)
	cout<<"prime number";
	else
	cout<<"not prime number";
return 0;
}
