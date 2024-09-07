#include<iostream>
using namespace std;

int main()
{
    int a = 19;
    int &r = a;

    cout<<a<<endl;
    cout<<r<<endl;
    r++;   // r is another variable who refersing to a;  it is like nick name.
     

    cout<<a<<endl;
    cout<<r<<endl;

    int b = 33;
    r = b;

    cout<<a<<endl;
    cout<<r<<endl;
    cout<<b;
    return 0 ;
}