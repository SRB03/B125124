#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Dynamically allocate memory to array
    int *arr = new int[n];
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }

    cout << endl;

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    float avg = sum/n;

    cout << "The average element is: " << avg << endl;

    // Remove the dynamically allocated memory
    delete[] arr;

    return 0;
}