#include<iostream>
using namespace std;
 

void a5t()
{
    int n = 5;
    while(n>0)
    {
        cout<<"jai shree Ram"<<endl;
        n--;
    }
}

void NaturalN()
{
    int n = 1;
    while(n<=10)
    {
        cout<<n<<endl;
        n++;
    }
}

void rt()
{
    int n = 11;
    while(n>0)
    {
        cout<<n<<endl;
        n--;
    }
}

void nOdd()
{
    for(int i = 0 ; i<21; i++)
    {
        if (i%2 != 0)
        {
          cout<<i<<endl;
        }
        
    }
}
void nOddReverce()
{
    for(int i = 20 ; i>0; i--)
    {
        if (i%2 != 0)
        {
          cout<<i<<endl;
        }
        
    }
}

void SquearN()
{
    int n = 1;
    while(n<=10)
    {
        cout<<n*n<<endl;
        n++;
    }
}
void qubearN()
{
    int n = 1;
    while(n<=10)
    {
        cout<<n*n*n<<endl;
        n++;
    }
}


void fiveTable()

{
    int n = 1;
    while(n<=10)
    {
        cout<<"5"<<"*"<<n<<" = "<<5*n<<endl;
        n++;
    }

}
int main ()
{
    //a5t();
    //NaturalN();
    rt();
    nOdd();
    
    SquearN();
    qubearN();
    fiveTable();
}