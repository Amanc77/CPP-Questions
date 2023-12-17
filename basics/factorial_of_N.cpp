#include<iostream>
using namespace std;
int main(){
    int n,i ,a=1;
    cout<<"Enter the number for find the factorial = ";
    cin>>n;
    for(i=1;i<=n;i++){

        a=i*a;

    }

        cout<<" factorial of "<<n<<" is =  "<<a<<endl;
    return 0;
}