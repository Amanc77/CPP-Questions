#include<iostream>
using namespace  std ;

void swap(int a, int b)
{
      int temp;
      temp =a;
      a=b;
      b= temp;
      cout<<" "<<a<< " "<<b<<endl;
}

int main()
{
      int x=0 , y =0;
      cout<<"Enter two number"<<endl;

      cin>>x>>y;

      cout<<"Entered two number are =  "<<x<< "  "<<y<<endl;


      cout<<"after swaping number"<<" =  ";
      
     swap(x , y);
      return 0;
}