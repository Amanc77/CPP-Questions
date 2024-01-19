#include<iostream>
using namespace std;

int main()

{
    int a=0;
    int b=1;
    int c=0;
    int num;
    cout<<"enter number of eliment for fibonachi serese   ";
    
    cin>>num;
    for(int i = 0; i<num; i++)
    {
    cout<<c<<"  ";
    a=b ;
    b=c;
    c=a+b;
    }

}