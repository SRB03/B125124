#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    // Dynamically allocate the array
    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }

    cout << endl;

    cout << "Elements in the array are: ";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " "; 
    }

    // Freeing the array
    delete[] arr;

    return 0;
}