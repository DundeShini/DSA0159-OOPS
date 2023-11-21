#include <iostream>
using namespace std;

int main()
{
    int a,b ,temp;
    cout<<"enter a and b value:";
    cin>>a>>b;
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping" << endl;
    cout<<"a value is:"<<a<<endl;
    cout<<"b value is:"<<b;

    return 0;
}
