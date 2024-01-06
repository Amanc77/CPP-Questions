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
            cout << "Enter value for arrqty[" << i << "][" << j << "]: ";
            cin>>A[i][j];
        }


    }

    cout<<"printing matrix"<<endl;
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
           cout << A[i][j] << " ";
        }
        cout<<endl;

    }

    return 0;
}