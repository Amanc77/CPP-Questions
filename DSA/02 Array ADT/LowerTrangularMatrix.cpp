#include <iostream>
#include <vector>

using namespace std; 

struct Matrix {
    int *A;
    int n;

    Matrix(int dimension) : n(dimension) {
        A = new int[n * (n + 1) / 2]; // Allocate memory for the lower triangular matrix
    }

    ~Matrix() {
        delete[] A; // Deallocate memory
    }

    void Set(int i, int j, int x) {
        if (i >= j) {
            A[n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j] = x;
        }
    }

    int Get(int i, int j) const {
        if (i >= j) {
            return A[n * (j - 1) + (j - 2) * (j - 1) / 2 + i - j];
        }
        return 0;
    }

    void Display() const {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i >= j) {
                    cout << Get(i, j) << " ";
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int dimension;
    cout << "Enter Dimension: ";
    cin >> dimension;

    Matrix m(dimension);

    cout << "Enter all elements:\n";
    for (int i = 1; i <= m.n; i++) {
        for (int j = 1; j <= m.n; j++) {
            int x;
            cin >> x;
            m.Set(i, j, x);
        }
    }

    cout << "\nMatrix:\n";
    m.Display();

    return 0;
}
