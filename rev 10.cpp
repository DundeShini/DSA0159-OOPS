#include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"enter the n value:";
	cin>>n;
	int a=n++;
	int b=n--;
	int c=a-n;
	int d=n-b;
    if(c>d)
    {
    	cout<<"nearest value is:"<<a;
	}
	else
	{
		cout<<"neraest value is:"<<b;
	}
return 0;
}
