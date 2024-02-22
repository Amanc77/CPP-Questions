#include<iostream>
using namespace std;

void swap(int  &n1, int &n2 ){
   int temp = n1;
    n1 = n2;
    n2 = temp;
    
}
int main (){
    int num1, num2, temp;
    cout<<"enter first number for swap'"<<endl;
    cin>>num1;
      cout<<"enter second  number for swap"<<endl;
    cin>>num2;
    cout<<"before swapping number are : "<<num1<<" "<<num2<<endl;
     

     swap(num1,num2);

     cout<<"after swapping number are : "<<num1<<" "<<num2<<endl;
    return 0;
}