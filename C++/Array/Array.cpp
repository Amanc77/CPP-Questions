#include<iostream>
using namespace std;
int main()
{ 
 
   int A[10] = { 0,3 };// rest of all assine 0;
   cout<<sizeof(A);

   for(int x :A)
   {
    cout<<endl<<x<<" ";
   }
    return 0;
}