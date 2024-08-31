#include<iostream>
using namespace std;



void q1()
{
    cout<<"enter three number ";
    int a,b,c;
    cin>>a>>b>>c;
    int sum = a+b+c;
    cout<<"sum of three number is "<<sum;
}

void q2()
{
    cout<<"enter a charectar ";
    char c;
    cin>>c;
    printf("%d",c);
}

void q3()
{
    int a = sizeof(char);
    int b = sizeof(double);
    int c = sizeof(int);
    int d = sizeof(float);
    cout<<a<<b<<c<<d;
}
void q4()
{
    cout<<"enter a digit ";
    int n;
    cin>>n;
    int m = n/10;
    int z = 0;
    cout<<m<<z;

}
void q5()
{
    cout<<"enter a digit ";
    int n;
    cin>>n;
    int m = n/10;
    int z;
    cout<<"now enter a number which you want to add in last ";
    cin>>z;
    
    cout<<"number become: "<<m<<z;

}

void q6()
{
    cout<<"enter amount in INR ";
    int n;
    cin>>n;
    float m = n/84.23;
   ;
    cout<<"amount is USD is: "<<m;

}

void q7()
{
    cout<<"enter a  three digit number ";
    int n;
    cin>>n;
    int ls = n % 10;
    n = n/10;
    int ls2 = n%10;
    n= n/10;
    int ls3 = n;

    int digitt = ls*100+ls3*10+ls2;
   
    cout<<"after roteting one unit right number become "<<digitt;


}
void q8()
{
    int s = 10>8>4;
    cout<<s;
}
int main()
{
    //q1();
    //q2();
    //q3();
    //q4();
    //q5();
    //q6();
    q8();
}