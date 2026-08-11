#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory to array
    int *arr = new int[n];

    cout << "Enter " << n << " elements; ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }

    cout << endl;

    // Finding the maximum element in the array
    int max = arr[0];
    for(int i = 0; i < n; ++i) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout << "The maximum element is: " << max << endl;

    // Freeing the dynamically allocated memory
    delete[] arr;

    return 0;
}