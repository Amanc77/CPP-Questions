#include<iostream>
using namespace std;

int main()
{
    int n ; 
    cout << "enter length of an array ";
    cin>>n;
    int A[n];
    cout<<"now enter value in Array"<<endl;
    for(int i =0 ; i<n ; i++)
    {
        cin>>A[i];
    }

    cout<<"now printing the value of Array"<<endl;
    for(int x: A)//now using for each loop
    {
        cout<<x<<endl;
    }
}

//if we not inicilise an array then it will collction of 0;