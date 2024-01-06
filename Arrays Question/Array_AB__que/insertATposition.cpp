#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
// insertin a eliment at pareticular position in the array

    int A[8] = { 0, 1, 2, 3, 4};
    for(int i = 8; i > 0; i--)
    {
        A[i+1] = A[i];

    }
    A[7]=40;
    for(int i = 0; i < 8; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}