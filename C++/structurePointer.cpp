#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int bridth;
    /* data */


};

struct complex
{
    int real; 
    int img;
 

};

struct Card
{
    int face;
    int shape;
    int color;
} c5,c6,c7; // struct and class should be declaye may be here
  
struct  Card r8,r9; // this may be declayer lobaly 



int main()
{ 
   struct Rectangle r1; // r1 accupaing 8byet memorey
   r1.length = 10;
   r1.bridth = 11;

   

   struct Rectangle *p; // pointer variable
   p = &r1; // it store the address of  object r1;

   // pointer are used to accesecing the heap memory.
  cout<<r1.length<<  "  " <<r1.bridth<<endl;
   // now by help of pointer;


   p->bridth = 4848;
   cout<<p->length<<" "<<p->bridth;


   struct Card c;
   c.color = 1;
   c.face = 4;
   c.shape = 5;
   struct Card c3[10]; // Array of structure;
  //it mean there is 10 object card c3 in which all have three value color,face and shape;
  
   cout<<endl<<"size of card c3 "<<sizeof(c3)<<endl;
    //struct Card ctjh = (4,3,2);
     return 0;
 }