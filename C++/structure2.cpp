#include<iostream>
using namespace std;

struct Rectangle
{
   int length;
   int breadth;
};

int main()
{ 
    
   struct Rectangle r = {4,3};
    cout<<"lenghth "<<r.length <<" breadth "<<r.breadth<<endl;
    return 0;
}