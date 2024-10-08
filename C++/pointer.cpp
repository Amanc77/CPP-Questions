#include<iostream>
using namespace std;

void PointerUsingArray()
{
    int A[5] = {4,5,4,6,3};
    int *p;
    p = &A[0];
    for(int x :A)
    cout<<x<<endl;
}
void PointerUsingArray2()
{
    
    int *p;
    p = new int[5];
    p[0] = 1; p[2] = 4; 
    p[3] = 6;
    for(int i = 0 ; i < 5 ; i++)
    {

        cout<<p[i]<<endl;
    }

    delete[] p ;
}

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout<<a<<endl;
    cout<<p<<endl; // it will give address of a . if u want to print value of a with the help of p then use *p;

    cout<<*p<<endl;

    PointerUsingArray();
    PointerUsingArray2();


     p = nullptr;
    return 0;
}




