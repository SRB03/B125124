#include <iostream>
using namespace std;

int calculateTotal(int arr[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

float calculateTotal(float arr[], int size) {
    float total = 0;
    for(int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int calculateTotal(int arr[], int startIndex, int size) {
    int total = 0;
    for(int i = startIndex; i < startIndex + size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int m;
    cout << "Enter size of int array: ";
    cin >> m;
    int *intArray = new int[m];
    cout << "Enter " << m << " integers: ";
    for (int i = 0; i < m; i++)
        cin >> intArray[i];

    int n;
    cout << "Enter size of float array: ";
    cin >> n;
    float *floatArray = new float[n];
    cout << "Enter " << n << " floats: ";
    for (int i = 0; i < n; i++)
        cin >> floatArray[i];

    int startIndex, subSize;
    cout << "Enter start index: ";
    cin >> startIndex;
    cout << "Enter number of elements to sum from that index: ";
    cin >> subSize;

    cout << "Total of integer array: " << calculateTotal(intArray, m) << endl;
    cout << "Total of floating-point array: " << calculateTotal(floatArray, n) << endl;
    cout << "Total of selected portion of integer array: " << calculateTotal(intArray, startIndex, subSize) << endl;

    delete[] intArray;
    delete[] floatArray;
    return 0;
}


