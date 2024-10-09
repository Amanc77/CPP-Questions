#include<iostream>
#include<vector>
using namespace std;

// int search(int A[],int n, int key);
  // int target = search(A,n,key);
  // array should be declreaered as int A[n];

int search(vector<int> A,int n, int key);

int search(vector<int>A,int n, int key){   // by vector
    for(int i = 0 ; i < n ;i++)
    {
        if(A[i] == key)
              return i;
        
           
    }
     return -1 ;
    
}

int searchForString(string A[],int n, string key){   // by vector
    for(int i = 0 ; i < n ;i++)
    {
        if(A[i] == key)
              return i;
        
           
    }
     return -1 ;
    
}
int main()
{ 
  int n;
  cout<<"enter size on an Array ";
  cin>>n;
//   vector<int> A(n);
//   cout <<"enter value for array \n";
//   for(int i = 0 ; i < n; i++){
//     cin >> A[i];
//   }
//    cout << "The entered values are:\n";
//     for (int i = 0; i < n; i++) {
//         cout << A[i] << " ";  // Print the array elements
//     }

  string A[n];
  cout <<"enter value for array \n";
  for(int i = 0 ; i < n; i++){
    cin >> A[i];
  }
   cout << "The entered values are:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";  // Print the array elements
    }

    cout << endl;

    string key;
    cout<<"now enter your key for search ";
    cin>>key;
    // int target = search(A,  n ,  key);

    //  int target = search(A, n, key);

    int target = searchForString(A,n,key);

     if ( target != -1)
            cout<<"eliment found at index "<<target<<endl;
     else 
         cout<<"eliment not found";
 
    return 0;
}