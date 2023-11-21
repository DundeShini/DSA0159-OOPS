#include<iostream>
using namespace std;
int main()
{
	int n,fact=1,i;
	cout<<"enter the n value:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<n<<" factorial is:"<<fact;
return 0;
}
