#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num , sum = 0 , rimender;
    cout<<"enter the number for chack ";
    cin>>num;
    int enteredNumber = num;
    while(num!=0)
    {
        rimender = num % 10;
        sum = sum + pow(rimender,3);
        num = num /10;

    }
    if (sum == enteredNumber)
    {
        cout<<enteredNumber<<" is Armstrong number";
    }
    else
      cout<<enteredNumber<<" is not armstrong number"<<endl;
}