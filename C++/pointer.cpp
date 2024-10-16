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


     int g = 10;
     int *q;
     q = &g;
     cout<<*q<<" "<<q<<" "<<&q<<endl;


     int A[5] = {4,3,2,1,5};
     int *h;
     h = A;
     for(int x = 0 ; x<5; x++)
     {
        cout<<h[x]<<endl;
     }
     //delete []h;

     int *jj;
     jj = (int *) malloc(5*sizeof(int)); // array inside heap // in c language.
     jj[0] = 3,jj[1] = 3,jj[2] = 3,jj[4] = 3,jj[3] = 3;
     for(int x = 0 ; x<5; x++)
     {
        cout<<jj[x]<<endl;
     }
     delete [] jj;
     int *v;
     v = new int[5]; // this is used in cpp;
     v[0] = 3,v[1] = 3,v[2] = 3,v[4] = 3,v[3] = 3;
     for(int x = 0 ; x<5; x++)
     {
        cout<<v[x]<<endl;
     }

     delete [] v;


     //
     cout<<" now checking size of pointer variable. \n";

     int *p1;
     char *p2;
     float *p3;
     double *p4;
     struct Rectangle *p5; 
     string *p6;


     cout<<sizeof(p1)<<endl;
     cout<<sizeof(p2)<<endl;
     cout<<sizeof(p3)<<endl;
     cout<<sizeof(p4)<<endl;
     cout<<sizeof(p5)<<endl;
     cout<<sizeof(p6)<<endl; // every pointer variable have fixed size which is 8 byet.
    return 0;
}




