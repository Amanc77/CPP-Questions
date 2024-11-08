#include <iostream>
#include <vector>
using namespace std;

class SparseMatrix {
private:
    vector<vector<int>> elements;

public:
    void addElement(int row, int col, int value) {
        if (value != 0) {
            elements.push_back({row, col, value}); // it will creat as {{row1,col1.value1} , {row2, col2, value2} ,{row3,col3,v3}, ... and all}
        }
    }

    void display() {
        cout << "Sparse Matrix:\n";
        cout << "Row\tCol\tValue\n";
        for (const auto& element : elements) {
            cout << element[0] << "\t" << element[1] << "\t" << element[2] << "\n";
        }
    }
};

int main() {
    SparseMatrix matrix;
    int row, col, value, numElements;

    cout << "Enter the number of non-zero elements: ";
    cin >> numElements;

    for (int i = 0; i < numElements; ++i) {
        cout << "Enter row, column, and value for element " << i + 1 << ": ";
        cin >> row >> col >> value;
        matrix.addElement(row, col, value);
    }

    matrix.display();

    return 0;
}
