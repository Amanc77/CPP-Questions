#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the row for first matrix"<<endl;

     int row,   column;
    cin>>row;
    cout<<"enter the column for first matrix"<<endl;
    cin>>column;

    int row2,   coloumn2;

    cout<<"enter the row  for second matrix"<<endl;

    cin>>row2;
    cout<<"enter the row  for second matrix"<<endl;
    cin>>coloumn2;


    if(column!=row2){
        cout<<"Multiplication is not posible"<<endl;
        return 0;

    }


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


    // multiplication of two matrix
    
    
    int multiplication[row][coloumn2];

     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
           multiplication[i][j] = 0 ;
           for(int k=0; k<column;k++)
           {
            multiplication[i][j] += A[i][k] * b[k][j];
           }

        }
        

    }




    cout<<"printing Sum of two  matrix:---   "<<endl;
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
           cout << multiplication[i][j] << " ";
//            cout << " " << mult[i][j];
// if(j == c2-1)
// cout << endl;
        }
        cout<<endl;

    }

    return 0;
}