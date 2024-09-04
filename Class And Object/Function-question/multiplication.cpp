#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the Number";
    int n,i;
    cin>>n;

    for(i=1;i<=10;i++)
    { 
        cout<<n<<" * "<<i<<"  = " << i*n<<endl;
    }
    


    return 0;
    
}