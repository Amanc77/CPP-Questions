//pas by refrence
#include<iostream>
using namespace std;
void callbyvlaue(int cups)
{
    cups += 10 ;
    cout<<"total cups in call by value is "<<cups<<endl;
}
void callbyrefrence(int &cups)
{
    cups += 10 ;
    cout<<"total cups in call by refrence is "<<cups<<endl;
}
int main()
{ 
   
    int chaicups = 5;
    callbyvlaue(chaicups);
    cout<<"total cups after call by value functin call "<<chaicups<<endl;
    cout<<"now runting call by refence ";
    callbyrefrence(chaicups);
     cout<<"\ntotal cups after call by refrence functin call "<<chaicups<<endl;
    
 
    return 0;
}