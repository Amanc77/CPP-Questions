#include<iostream>
using namespace std;
int main()
{ 
 
   // first method to crate 2d array it is created in stack.

   int A [2][3]  = {{1,2,3},{4,5,6}} ;

   for(int i=0 ; i<2; i++)
   {
    for(int j = 0 ; j<3; j++)
    {
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
   }
   
// second menthod which is created in heap
   int *A2[3] ;
   A2[0] = new int [4];
   A2 [1] = new int [4];
   A2 [2] = new int [4];

   A2[1][2] = 44;
   A2[0][1] = 8;
   A2[2][0] = 43;

cout<<"now printing second  Array A2\n";
   for(int i=0 ; i<3; i++)
   {
    for(int j = 0 ; j<4; j++)
    {
        cout<<A2[i][j]<<" ";
    }
    cout<<endl;
   }


// third method 

int **A3;
A3 = new int *[3];

A3[0] = new int [4];
A3[2] = new int [4];
A3[1] = new int [4];

  A2[1][2] = 44;
   A2[0][1] = 8;
   A2[2][0] = 43;

cout<<"now printing third Array A2\n";
   for(int i=0 ; i<3; i++)
   {
    for(int j = 0 ; j<4; j++)
    {
        cout<<A3[i][j]<<" ";
    }
    cout<<endl;
   }


// Formula for 2D Row mazor  = l + [i*n +j]*s;


// Formula for 2D colum mazor  = l + [j*m + i]*s;


 


    return 0;
}