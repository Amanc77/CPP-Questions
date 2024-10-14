// structure is same as class but only diffrence is everything is Public in structure by defalt. 
//and in class every thing is privet bydefalt.

#include<iostream>
using namespace std;

struct demo
{
  int a;
  int b;
  int sum()
  {
    return a+b;
  }
};
int main()
{ 
     demo d;
    d.a = 5;
    d.b =8;

    cout<<"sum of a and b is "<<d.sum();
 
    return 0;
}