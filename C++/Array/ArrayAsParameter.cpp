#include<iostream>
using namespace std;

void printArray(int A[], int n) // we can also use *A 
{
    for(int i = 0 ; i < n; i++)
    cout<<A[i]<<endl;
}


// now creatin a function which return an Array;

int * fun (int size)
{
    int *p;
    p = new int[size];
    for(int i = 0 ; i< size ; i++)
    p[i] = i +1;

    return p;
}


int main()
{ 
    int A[5] = {1,3,4,5,6};

    printArray(A,5);

    int *ptr, sz =7;
    ptr = fun(sz);

    for(int r = 0; r<sz ; r++) 
      cout<<ptr[r]<<endl;
 
 
    return 0;
}