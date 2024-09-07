#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the row for first matrix"<<endl;

     int row,   column;
    cin>>row;
    cout<<"enter the column for first matrix"<<endl;
    cin>>column;


    int A[row][column];
    cout<<"now inter eliment in row and column"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout << "Enter value for first Matrix:---  [" << i << "][" << j << "]: ";
            cin>>A[i][j];
        }


    }
    cout<<"enter the row  for second matrix"<<endl;

     int row2,   coloumn2;
    cin>>row2;
    cout<<"enter the row  for second matrix"<<endl;
    cin>>coloumn2;

    int b[row2][coloumn2];
    cout<<"now inter eliment in row2 and coloumn2"<<endl;
    for(int i=0; i<row2; i++)
    {
        for(int j=0; j<coloumn2; j++)
        {
            cout << "Enter value for second array[" << i << "][" << j << "]: ";
            cin>>b[i][j];
        }


    }


    // sume of two matrix
    
    
    int sum[row][column];

     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
           sum[i][j] = A[i][j] +b[i][j];
        }
        

    }




    cout<<"printing Sum of two  matrix:---   "<<endl;
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
           cout << sum[i][j] << " ";
        }
        cout<<endl;

    }

    return 0;
}