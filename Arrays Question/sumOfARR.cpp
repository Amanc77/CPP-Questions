#include<iostream>
using namespace std;

int main() {
    int A[]={3,2,43,2,32,5,2,32,2,58,4,89,67,9,8,76};
    int n,sum=0;
    int c= sizeof(A)/sizeof(A[0]);
    cout<<c<<endl;
    n=c;
    for(int i=0; i<n; i++)
    {
        sum=sum+A[i];
        
    }
    cout<<sum<<endl;
    return 0;
    
}



// chatgptj

