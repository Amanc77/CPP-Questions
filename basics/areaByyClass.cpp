#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }

    int parameter()
    {
        return 2 * (length * width);
    }
};

int main()
{
    Rectangle r1;

    r1.length = 5;
    r1.width = 5;
    cout << r1.area() << "  " << r1.parameter();

    return 0;
}
