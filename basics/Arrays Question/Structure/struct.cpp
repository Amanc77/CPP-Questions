//structure is also same as class there is minior diffrence

#include <iostream>
using namespace std;

struct Rectengle
{
    public:
   int length ;
   int  bridth;

   int area()
   {
    return length*bridth;
   }

};
    
int main ()
{
    struct Rectengle r = {10,3};
    
    // r.length = 12;
    // r.bridth = 52;

   //float a = length*bridth;
    cout<<" "<<r.length;
    cout<<" "<<r.bridth;
    

    return 0 ;
    
}

