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
   
   ~Rectangle()
   {
    cout<<"Destructor \n";
   }


};
int main()
{ 
    Rectangle r (5,3);
    cout<<"area is "<<r.area()<<endl;
 
 
    return 0;
}