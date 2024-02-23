#include<iostream>
using namespace std;
int main ()
{
    int n , i;
    cout<<"Enter the number from where you want odd and even number : ";
    cin>>n;

        cout<<"odd  number are : ";

    for(i=1;i<=n; i++)
    {
        if(i%2!=0)
        cout<<i<<" , ";

    


    }
cout<<endl;
    cout<<"even number are : ";
    for(i=1;i<=n; i++)
    {
        if(i%2!=0)
        cout<<i+1<<" , ";

    


    }
    cout<<endl;
    return 0;

}