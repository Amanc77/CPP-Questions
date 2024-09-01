#include<iostream>
using namespace std;

void checkdigit()
{
    cout<<"enter a number";
    int n;
    cin>>n;

    if((n>99 && n<1000) || (n<-99&&n>-1000))
    {
        cout<<n<<": has three digit";
    }
    else{cout<<"number have not three digit";}
}

void costprice()
{
    cout<<"enter cost price ";
    int cost;
    cin>>cost;
    cout<<"now enter selling price ";
    int sell;
    cin>>sell;
    int d = sell - cost;

    if (d>0)
    {
        cout<<"profit of "<<d;

    }
    else if(d<0)
       {
         cout<<"loss of "<<-d<<endl;
       }
    else
       {
         cout<<"there is no profit and loss";
       }
}

void divisibleBY2and3()
{
    cout<<"enter a number ";
    int n;
    cin>>n;
    if(n%2==0 && n%3==0)
    {
        cout<<n<<" is divisible by both 2 and 3";
    }
    else
       cout<<"not divisible by both";
}
int main()
{
    //checkdigit();
   // costprice();
    divisibleBY2and3();
}