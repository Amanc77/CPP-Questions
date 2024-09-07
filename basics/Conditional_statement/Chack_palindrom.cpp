#include<iostream>
using namespace std;

int main()
{
    int reverse = 0,rimender = 0;
    cout<<"enter number for chack palindrome  ";
    int num ;
    cin>>num;
    int enterdNumber = num;
    int i=0;
    while(num!=0)
    {
        rimender = num % 10 ;
        reverse = reverse*10+rimender;
        num = num /10;
    }

    if (reverse == enterdNumber)
        {
            cout<<enterdNumber<<"  is palindrome number "<<endl;

        }
    else
       cout<<enterdNumber<<" is not a palindrom number";


    return 0;
}