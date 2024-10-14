#include<iostream>
using namespace std;
class Rectangle
{
    private:
     int length ;
     int breadth;

     public: //   By default, classes in C++ are private. and stuct is public;
     void setlenght(int l)
     {
        if(l > 0)
           length = l;
        else  
            length = 0;
     }
      void setbreadth(int b)
     {
        if(b > 0)
           breadth = b;
        else 
            breadth = 0;
     }

     int getlength()
     {
        return length;
     }
     int getbreadth()
     {
        return breadth;
     }
     int Area()
     {
        return length * breadth;
     }
     int perameter ()
     {
        return 2 * (length+breadth);
     }
};
int main()
{ 
    Rectangle r , r2;
    int beforlenght = r.getlength();
    cout<<beforlenght<<endl;//garbage value;
     
    r.setlenght(5);
    cout<<"after set lenght "<<r.getlength()<<endl;
    r.setbreadth(10);
    cout<<"area "<<r.Area()<<endl;
    
    return 0;
}