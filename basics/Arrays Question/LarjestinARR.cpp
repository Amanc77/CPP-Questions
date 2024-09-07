#include<iostream>
using namespace std;
int main()
{
    int A[]={6,54,6,8,65,8,5,8,65,8,65,67,72,23,4345,56246,626,64,646,2,6254556,52,344,4234,234,41,3,3,4,4,4,254,53,5};
     int c=sizeof(A)/sizeof(A[0]);
    int n;
     n=c;
     int i, max;
     max=A[0];
     for(i=0;i<n;i++)
     {
         if(A[i]> max)
         max=A[i];
     }

    cout<<"bigest number is  "<<max<<endl;
    return 0;
}