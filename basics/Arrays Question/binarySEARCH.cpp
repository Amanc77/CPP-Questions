#include<iostream>
using namespace std;
int main()
{
    //int A[]={3,4,5,6,32,43,53,54,55,56,323,343,6543,7456,25,23,3,34,34,4,35,23,24,45,44,6635,34234,22344,34234};
    cout <<"enter how much eliment you want to input in arry" << endl;
    int n;
    cin>>n;
    cout<<"now enter eliment you want to input in arry"<< endl;
   int A[100];
   
   for(int i = 0; i <n; i++)
   {
     cin>>A[i];
   }

    cout <<"enter the key for search  ";
    
   
    int key ,mid;
    cin>>key;
    int l=0;
    int h = n - 1; //  you can use also sizeof(A) / sizeof(A[0]) -1


    while(l<=h)
    {
    
        mid=(l+h)/2;
        if (A[mid]==key)
        {
            cout<<"Element found at index "<<mid<<endl;
            return 0;

        }
        else if (A[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }


       


    }
    cout<<"Element not found"<<endl;
     
    return 0;

}