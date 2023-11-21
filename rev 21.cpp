#include<iostream>
using namespace std;
const double PI=3.14159;
class circle
{
	public:
		double radius;
};
int main()
{
	double area;
	circle rad;
	rad.radius=5;
	area=PI*rad.radius*rad.radius;
	cout<<"area of circle:"<<area;
return 0;
}
