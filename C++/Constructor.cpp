#include <iostream>
using namespace std;


class Rectangle
{
    private:
     int length ;
     int breadth;

     public: //  this is non parameterized constructor;,
     
     void setlength(int l)
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
     int perameter ();
     
     

};

class rectegle2
{
    private:
     int length ;
     int breadth;

     public: // 

     rectegle2(int l, int b) // this is parameterized constucture
     {
        setlength(l);
        setbreadth(b);
     }
     
     void setlength(int l)
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

    int paramere()
    {
        return 2*(length + breadth);
    }
};

int Rectangle::perameter() // :: is known as scope resolution .
{
    return 2 * (length + breadth);
};
 


int main()
{ 
    rectegle2  r2(4,5);
    Rectangle r1 ;
    int beforlenght = r1.getlength();
    cout<<beforlenght<<endl;//garbage value;
     
    r1.setlength(5);
    cout<<"after set lenght "<<r1.getlength()<<endl;
    r1.setbreadth(10);
    cout<<"area "<<r1.Area()<<endl;
    cout<<"parameter is "<<r1.perameter()<<endl;
    

    cout<<"this is the are of  R2 "<<r2.Area()<<" and breadth is "<<r2.paramere()<<endl;
    return 0;
}