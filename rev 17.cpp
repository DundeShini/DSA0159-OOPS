#include<iostream>
using namespace std;
int main()
{
	int n,n1=0,n2=1,n3,i;
	cout<<"enter the n value:";
	cin>>n;
	cout<<"fibonacci series is:"<<n1<<" "<<n2<<" ";
	for(i=2;i<=n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
	    cout<<n3<<" ";
    }
return 0;
}
