#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int N, X;
	cin>>N;
	cin>>X;
	
	int A[N];
	 for(int i = 0 ; i< N; i++)
    {
       cin>>A[i];
    }
    int c = 0 ;
     for(int i = 0 ; i< N; i++)
    {
        if(A[i] == X)
        {
            cout<<"YES"<<endl;
             c = 1;
        }
        
    }
    
    if(c != 1)
    {
        cout<<"NO"<<endl;
    }
    
    
    

}
