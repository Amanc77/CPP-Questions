#include<iostream>
using namespace std;
int main(){
    int n,i ,a=1;
    cout<<"enter the number  ";
    cin>>n;
    for(i=1;i<=n;i++){

        a=i*a;

        cout<<a<<" ";
    }
    return 0;
}