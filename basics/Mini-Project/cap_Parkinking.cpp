#include<iostream>
using namespace std;

int main()
{
    int car = 0, bike = 0, bus = 0;
    int inputKey;

    cout << "enter 1 for adding car" << endl;
    cout << "enter 2 for adding bike" << endl;
    cout << "enter 3 for adding bus" << endl;
    cout << "enter 4 for Show all car, bus, bike" << endl;
    cout << "enter 5 for adding Reset" << endl;
    cout << "enter 6 for adding exit" << endl;

    while (1)
    {
        cout << "enter key: ";
        cin >> inputKey;

        if (inputKey == 1)
        {
            car += 1;
            cout << "Added 1 car. Total car is now = " << car << endl;
        }
        else if (inputKey == 2)
        {
            bike += 1;
            cout << "Added 1 bike. Total bike is now = " << bike << endl;
        }
        else if (inputKey == 3)
        {
            bus += 1;
            cout << "Added 1 bus. Total bus is now = " << bus << endl;
        }
        else if (inputKey == 4)
        {
            cout << "Total car is = " << car << endl;
            cout << "Total bike is = " << bike << endl;
            cout << "Total bus is = " << bus << endl;
        }
        else if (inputKey == 5)
        {
            car = 0;
            bike = 0;
            bus = 0;
            cout << "Reset all counts to zero." << endl;
        }
        else if (inputKey == 6)
        {
            exit(0);
        }
        else
        {
            cout << "You entered an invalid key. Enter a valid key" << endl;
        }
    }

    return 0;
}
