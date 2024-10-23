#include<iostream>
using namespace std;
int main()
{ 
    int A[5];  // array inside stack.
    int *p;
    p = new int [5]; //array inside heap ;

    p[1] = 32;
    p[0]= 6;
    p[2] =4;
    p[3] = 54;
    p[4]  = 43;
    for(int x = 0 ; x<5 ; x++)
    {
        cout<<p[x]<<endl;
    }

    //delete []p; // if we will not delete then it may cause memory leeck.
 

    int *q;
    q = (int *) malloc(10*sizeof(int));  //c style
    for(int i = 0 ; i<5; i++ )
    {
        q[i] = p[i];
    }
    delete []p;

    q[9] = 9;
    q[8] =3443;

     for(int x = 0 ; x<10 ; x++)
    {
        cout<<q[x]<<endl;
    }
   // delete []q;

   free(q);
     return 0;
}