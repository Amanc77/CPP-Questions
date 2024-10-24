#include<iostream>
using namespace std;
int main()
{ 
   
   int n;
   cout<<"enter size of an Array \n";
   cin>>n;
   int *arr;
   arr = new int[n];
    

   cout<<"now enter value in ARr ";
   for(int i = 0 ; i < n; i++)
   {
    cin>>arr[i];
   }
   cout<<"now priting value of arr ";
   for(int i = 0 ; i < n; i++)
   {
    cout<<arr[i]<< " ";
   }
    return 0;
}