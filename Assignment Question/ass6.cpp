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

void cheackNumber()
{
    int n; 
    cout<<"enter a number ";
    cin>>n;
     if(n%2==0)
    {
        cout<<n<<" is even";
    }
   else if(n==0)
    {
        cout<<n<<" is Zero";
    }
   
    else
    {
        cout<<n<<" is odd";
    }
}

void areaTrangle()
{
    int h , b;
    cout<<"enter hight and base ";
    cin>>h>>b;
    float area = (b * h)/2;
    cout<<"Area of trangle is "<<area<<endl;
}


void monthName()
{
    cout<<"enter a Number within 1 to 12 ";
    int n; 
    cin>>n;
    switch (n)
    {
    case 1: cout<<"January";
        break;
    case 2: cout<<"February";
        break;
    case 3: cout<<"March";
        break;
    case 4: cout<<"April";
        break;
    case 5: cout<<"May";
        break;
    case 6: cout<<"June";
        break;
    case 7: cout<<"July";
        break;
    case 8: cout<<"August";
        break;
    case 9: cout<<"September";
        break;
    case 10: cout<<"Octomber";
        break;
    case 11: cout<<"Nombver";
        break;
    case 12: cout<<"December";
        break;
   
    
    default: cout<<"invalid input";
        break;
    }
}

int main()
{
    //checkdigit();
   // costprice();
   // divisibleBY2and3();
   //cheackNumber();
   areaTrangle();
   monthName();

}