#include<iostream>
using namespace std;

int main()
{
    int car=0,bike=0,bus=0;

   int inputKey;


   cout<<"enter 1 for adding car "<<endl;
        cout<<"enter 2 for adding bike "<<endl;
        cout<<"enter 3 for adding buss "<<endl;
        cout<<"enter 4 for Show all car, buss , bike "<<endl;
        cout<<"enter 5 for adding Reset "<<endl;
        cout<<"enter 6 for adding exit "<<endl;


    while(1)
    {
        
    
        cout<<"enter key  ";
        cin>>inputKey;
        if(inputKey==1)
        {
            car = car + 1;
        }
        else if(inputKey==2)
        {
            bike = bike + 1;
        }
        else if(inputKey==3)
        {
            bus = bus + 1;
        }
        else if(inputKey==4)
        {
            cout<<"total car is = "<<car<<endl;
            cout<<"total bike is =  "<<bike<<endl;
            cout<<"total bos is = "<<bus<<endl;

        }
        else if(inputKey==5)
        {
            car = 0;
            bike = 0;
            bus = 0;
        }
        else if(inputKey==6)
        {
            exit(0);
        }
        else{
            cout<<" you are enter invalid key Now you have to enter valid key "<<endl;
        }
    }
    return 0;
}