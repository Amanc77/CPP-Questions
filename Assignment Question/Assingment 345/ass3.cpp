#include<iostream>
using namespace std;

void size()
{
    int s = sizeof(char);
    cout<<"size of char is "<<s<<endl;
}
void realconstent(){
    int s = sizeof(int);
    cout<<"size of int is "<<s<<endl;
}
void q3()
{
    char c = 'A';
    char dh = ++c;
    cout<<dh<<endl;
}

void q4()
{
    int n;
    cout<<"enter a number";
    cin>>n;

    int unitN = n%10;
    cout<<"unit number of "<<n<<" is "<<unitN<<endl;
}
void q5()
{
    int n;
    cout<<"enter a number";
    cin>>n;

    int unitN = n/10;
    cout<<" number without last digit "<<n<<" is "<<unitN<<endl;
}


void q6()
{
    int n,m;
    cout<<"enter two  number";
    cin>>n>>m;

    int c = n; 
    n = m;
    m = c;
    cout<<"after swaping number "<<n<<" and  "<<m<<endl;
}

void q7()
{
    int a=10 , b=40;
     a = a+b;
     b = a-b;
    a = a-b;
    cout<<"after swapping "<<a<<" "<<b<<endl; 
}
void q8()
{
    int a=10 , b=40;
     a = a^b;
     b = a^b;
    a = a^b;
    cout<<"after swapping "<<a<<" "<<b<<endl; 
}

void q9()
{
    int a=10 , b=40;
     a = a*b;
     b = a/b;
    a = a/b;
    cout<<"after swapping "<<a<<" "<<b<<endl; 
}


void q10()
{
    int a=10 , b=40;
     a = a+b - (b=a);
    cout<<"after swapping "<<a<<" "<<b<<endl; 
}


int main()
{
    size();
    realconstent();
    //q3();
    //q4();
    //q5();
    // q6();
    //q7();
    //q8();
    //q9();
    q10();

}



