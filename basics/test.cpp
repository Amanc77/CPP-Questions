#include<iostream>
#include<vector>
using namespace std;

int main() {
    cout << "Enter how many elements you want to input in array: ";
    int n;
    cin >> n;

    vector<int> A(n);

    cout << "Now enter elements you want to input in array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter the key for search: ";
    int key, mid;
    cin >> key;

    int l = 0;
    int h = n - 1;

    while (l <= h) {
        mid = (l + h) / 2;
        if (A[mid] == key) {
            cout << "Element found at index " << mid << endl;
            return 0;
        } else if (A[mid] < key) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}
