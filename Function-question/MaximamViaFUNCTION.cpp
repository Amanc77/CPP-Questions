#include<iostream>
using namespace std;

int maximumNumber(int a, int b , int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    else 
    {
        return c;

    }

}
int main()
{
    // int x=4,y=32,z=20,max;
    int x,y,z,max;
    cout<<"Enter three number"<<endl;
    cin>>x>>y>>z;
     max = maximumNumber(x,y,z);
     cout<<"MAXIMUM IS =   "<<max<<endl;
    return 0;
}