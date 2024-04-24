#include<iostream>
using namespace std;

int squar(int a)
{

        return a*a;

    }


int main()
{
    // int x=4,y=32,z=20,max;
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    int sq = squar(x);
     cout<<"squar IS =   "<<sq<<endl;
    return 0;
}