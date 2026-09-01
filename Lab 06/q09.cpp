#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of table numbers: ";
    cin >> n;

    int* tableNumbers = new int[n];

    cout << "Enter " << n << " table numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> tableNumbers[i];
    }

    int* minPtr = tableNumbers;
    for (int i = 1; i < n; ++i) {
        if (*(tableNumbers + i) < *minPtr) {
            minPtr = tableNumbers + i;
        }
    }

    cout << "The smallest table number is: " << *minPtr << endl;

    delete[] tableNumbers;

    return 0;
}