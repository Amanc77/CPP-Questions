#include<iostream>
using namespace std;
class Rectangle
{
    public:
     int length ;
     int breadth;
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
//    Rectangle r;
//    Rectangle *p;
//    p = &r;
  Rectangle r;  // object created in stack 
  Rectangle r2 ;
  Rectangle *p = new Rectangle(); // object is created in heap;
   //Rectangle *p;
   p->length = 10;
   p->breadth = 5;

   cout<<p->Area(); // -> is only for pointer; is known as arrow operetor

   r2.length = 10;
   r2.breadth = 20;
   cout<<r2.Area()<<endl; // 

 
 
    return 0;
}