#include<iostream>
using namespace std;
int main()
{ 
 

    string name = "aman ";
    string lastname = "kumar";

    string s = name.append(lastname);

    string fullname = name + lastname;
    cout<<"full name is: "<<fullname<<endl;

    cout<<s<<endl;

    

 
    return 0;
}