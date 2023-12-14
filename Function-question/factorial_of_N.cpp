#include<iostream>
using namespace std;
int main(){
    int n,i ,a=1;
    cin>>n;
    for(i=1;i<=n;i++){

        a=i*a;

        cout<<a<<endl;
    }
    return 0;
}