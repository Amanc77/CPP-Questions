#include<iostream>
using namespace std;


void linerSearch(int A[] , int &key ,int n ){



    for(int i=0;i<n;i++)
    {
        if (key== A[i])
        {
            cout<<"kew is found at  "<<i<<endl;
            return ;

        }
    
    }
     cout<<"key not found"<<endl;
    return ;
}

int main ()
{   
    int A[]={3,5,4,25,35,34,65,34,44,52,63};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"ENTER THE KRY  ";
    int key;
    cin>>key;
    linerSearch(A,key ,n);

   
    return 0;
}
