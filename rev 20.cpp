#include<iostream>
using namespace std;
class rectangle
{
	public:
		double length;
		double breadth;
};
int main()
{
	rectangle rec;
	rec.length=10;
	rec.breadth=9;
	double area;
	area=rec.length*rec.breadth;
	cout<<"area of rectangle is:"<<area;
return 0;
}
