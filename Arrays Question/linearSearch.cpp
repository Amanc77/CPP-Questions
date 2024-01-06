#include<iostream>
using namespace std;
int main ()
{   
    int A[]={3,5,4,25,35,34,65,34,44,52,63};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"ENTER THE KRY  ";
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if (key==A[i])
        {
            cout<<"kew is found at  "<<i<<endl;
            return 0;

        }

    }

    cout<<"key not found"<<endl;
    return 0;
}


