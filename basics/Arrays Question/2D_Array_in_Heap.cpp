#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int **A;
    A = new int*[3];
    
    // \int m[3][4] = {{1,2,3,4} ,{5,6,7,8} , {9,10,11,12}  };
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
    
    A[0][1] = 1;
    A[0][2] = 2;
    A[0][3] = 3;
    A[0][0] = 4;
    A[1][1] = 5;
    A[1][2] = 6;
    A[1][3] = 7;
    A[1][0] = 8;
    A[2][1] = 9;
    A[2][2] = 10;
    A[2][3] = 11;
    A[2][0] = 12;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";//""is use for space
        }
        cout<<endl;
    }


    //  cout<<m<<endl;
    return 0;
}
