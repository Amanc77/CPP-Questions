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
    Rectangle r1,r2;
    r1.length = 10;
    r1.breadth = 5;
    int area  = r1.Area();
    cout<<"are of first Rectengle is "<<area<<endl;
    int c =  r2.Area();
    cout<<"area of  rectegel r2 without passing length and breadth "<<c<<endl;

    


 
 
    return 0;
}