#include <iostream>
#include <string>
using namespace std;

void whileloop(); // Function declaration
void dowhileloop();

int main()
{ 
    whileloop();
    dowhileloop();

    return 0;
}

void whileloop()
{
    cout << "Now started coding\n";

    int cup;
    cout << "How many cups of tea do you have?\n";
    cin >> cup;
    cout << "Total cups of tea: " << cup << endl;

    while (cup > 0)
    {
        cout << "\nNow serving a cup of tea\n";
        cup--;
        cout << "Now remaining cups are: " << cup << endl;
    }
    
    cout << "All tea has been served.\n";
}

void dowhileloop()
{ 
    int cup = 0;
    string ask ;
    do{
        cout<<"do you want more cup of tea yes/no ";
        cin>>ask;
        cup += 1;
    }while(ask == "yes");
  
  cout<<"total tea he drink "<<cup;


}       


void Nestedloop()
{ 
    // isame kuchh nahi hota bass loop le andar loop use karana hota hai
}