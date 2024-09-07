//fucntion is a pice of code which perform a specific task.  (modular / prosilar programming)
// function is also known as method. it allow program to brack a lrge code in smaller code.

#include<iostream>
using namespace std;

int add(int a , int b , int e = 0){ // formal parameter;
    return a+b+e;
}



void swap(int *x, int  *y)
{
    int temp = *x;
    *x = *y;
   *y = temp;
}



void classbyReference(int &x , int &y)
{
    int temp = x;
    x = y; 
    y = temp;
}



int main()
{  
    int c,d,e;
    c =2;
    d =4;
    e = 23;
    

    cout<<"sum is "<<add(c,d,e); // actual parameter; //call by value;


    swap(&c,&d);//class by address
    cout<<c<<" "<<d<<endl;

    classbyReference(d,e);
    cout<<"swaping by call by reference  "<<d<<" "<<e;

   
 
 
    return 0;
}
