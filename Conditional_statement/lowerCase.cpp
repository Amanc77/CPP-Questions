#include<iostream>
using namespace std;
int main()
{
    cout<<"enter any key "<<endl;
    string ch;
    cin>>ch;
    if(ch>="a" && ch<="z")
            {
                cout<<ch<<" is lower case"<<endl;
            }
    else if(ch>="A" && ch<="Z")
            {
                cout<<ch<<" is upper case"<<endl;
            }
    else if(ch>="0" && ch<="9") 
    {
              cout<<ch<<" is number"<<endl;
    }
    else
    {
        cout<<ch<<" this is spcal charactr "<<endl;
    }
}