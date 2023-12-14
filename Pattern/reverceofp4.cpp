#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the numaber"<<endl;
    int n=7; 
    int i,j, k;
   // cin>>n;
    for(int i=0;i<n;i++)
    {
        // space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        // starspace
        for(int j=0;j<n-(2*i);j++)
        {
            cout<<"*";
        }
        // space
    // space
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    
}
return 0;
}