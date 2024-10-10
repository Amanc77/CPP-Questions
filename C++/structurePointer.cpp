#include<iostream>
using namespace std;

struct rectengle
{
    int length;
    int bridth;
    /* data */
};

int main()
{ 
   struct rectengle r1;
   r1.length = 10;
   r1.bridth = 11;

   struct rectengle *p;
   p = &r1;

   
  cout<<r1.length<<  "  " <<r1.bridth<<endl;
   // now by help of pointer;


   p->bridth = 4848;
   cout<<p->length<<" "<<p->bridth;


   
 
     return 0;
 }