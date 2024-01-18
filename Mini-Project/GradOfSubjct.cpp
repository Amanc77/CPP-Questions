#include<iostream>
using namespace std;

int main()
{
    int ph, ch, bi, mat, com;
    cout << "enter number in physics" << endl;
    cin >> ph;
    cout << "enter number in chemistry" << endl;
    cin >> ch;
    cout << "enter number in biology" << endl;
    cin >> bi;
    cout << "enter number in math" << endl;
    cin >> mat;
    cout << "enter number in computer" << endl;
    cin >> com;

    int totalNumber = ph + ch + bi + mat + com;
    float percentage = (totalNumber / 500.0) * 100;

    if (percentage >= 90)
    {
        cout <<"Totatal parcentge is "<< percentage << " by this percentage you will get Grade A" << endl;
    }
    else if (percentage >= 80)
    {
        cout << percentage << " by this percentage you will get Grade B" << endl;
    }
    else if (percentage >= 70)
    {
        cout << percentage << " by this percentage you will get Grade C" << endl;
    }
    else if (percentage >= 60)
    {
        cout << percentage << " by this percentage you will get Grade D" << endl;
    }
    else if (percentage >= 40)
    {
        cout << percentage << " by this percentage you will get Grade E" << endl;
    }
    else
    {
        cout << percentage << " by this percentage you will get Grade F, and you have failed. Please give the exam again." << endl;
    }

    return 0;
}
