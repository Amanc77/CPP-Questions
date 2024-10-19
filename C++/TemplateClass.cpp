#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    // Constructor to initialize values
    Arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    // Function to add a and b
    T add()
    {
        return a + b;
    }

    // Function to subtract b from a
    T sub()
    {
        return a - b;
    }
};

int main()
{
    Arithmetic<int> arith(5, 4);
    Arithmetic <string> s("aman ","kumar ");
    
    cout << "Addition: " << arith.add() << endl;
    cout << "Subtraction: " << arith.sub() << endl;
  


     cout<<s.add()<<endl;
    // cout<<s.sub()<<endl;
    return 0;
}
