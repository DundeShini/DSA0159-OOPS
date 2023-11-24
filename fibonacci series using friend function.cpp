#include<iostream>
using namespace std;
class fibonacci
{
private:
	int a=0;
	int b=1;
	int t,num;
	public:
		fibonacci()
		{
			cout<<"enter the number :"<<endl;
			cin>>num;
			cout<<"the fibonacci series is :"<<a<<b;
			for(int j=1;j<=num;j++)
			{
				t=a+b;
				cout<<t;
				a=b;
				b=t;
			}
		}
		friend int show(fibonacci);
	};
	int show(fibonacci num)
	{
		cout<<"\n";
	}
	int main()
	{
	fibonacci num;
		show(num);
	}
