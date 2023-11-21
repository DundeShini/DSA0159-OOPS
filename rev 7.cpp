#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter the character:";
	cin>>c;
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		cout<<"character is vowel";
	}
	else
	{
		cout<<"character is constant";
	}
return 0;
}
