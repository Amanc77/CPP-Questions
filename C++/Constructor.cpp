#include<iostream>
using namespace std;

class Rectangle
{
    private:
      int length;
      int breadth;

    public:
    Rectangle(int l,int b)
    {
        length = l;
        breadth = b;
    }

    int area ()
    {
        return length*breadth;
    }

};
int main()
{ 
    Rectangle r (5,3);
    cout<<"area is "<<r.area();
 
 
    return 0;
}