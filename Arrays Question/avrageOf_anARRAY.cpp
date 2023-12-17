#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
    cout<<"enter the number of elements in position ["<<i<<"]  :-  ";
    cin>>A[i];
    }
    // printing array
    cout<<"Given array is  :--  ";
     for(int i=0;i<n;i++)
    {
    
    cout<<A[i]<<"  ";
    }
    cout<<endl;

    // summm
    
    int sum =0;
    for (int i=0; i<n; i++){
        sum += A[i];
    }

    // Avrage
    int average = sum /n;
    cout << "Average of given Array is : " << average << endl;
    return 0;
}