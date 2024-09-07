#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number"<<endl;
    int number;
    cin>>number;
     
    for (int i=0; i<=number; i++)
    {
        for (int j=0; j<=number; j++)
        {
            if((i+j)>(number-1))
           {
            cout<<"*";
            }
           
           else
           {
            cout<<" ";
           }
        }
        cout<<endl;
    }
    return 0;

}