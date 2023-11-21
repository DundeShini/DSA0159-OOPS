#include<iostream>
using namespace std;
int main()
{
	int n,i,r,sum=0,temp;
	cout<<"enter n value:";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==temp)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
return 0;
}
