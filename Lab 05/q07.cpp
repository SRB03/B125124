#include <iostream>
using namespace std;

// to compare two integers
int compareData(int a, int b) {
    if(a > b) return a;
    return b;
}

// to compare two floating-point numbers
float compareData(float a, float b) {
    if(a > b) return a;
    return b;
}

// to compare two integer arrays of equal size
bool compareData(int arr1[], int arr2[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i]) return false;
    }
    return true;
}

int main() {
    int a, b;
    float x, y;
    int size;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Greater value between " << a << " and " << b << " is: " << compareData(a, b) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Greater value between " << x << " and " << y << " is: " << compareData(x, y) << endl;

    cout << "Enter size of integer arrays: ";
    cin >> size;

    int *array1 = new int[size];
    int *array2 = new int[size];

    cout << "Enter " << size << " elements for first array: ";
    for (int i = 0; i < size; i++) {
        cin >> array1[i];
    }

    cout << "Enter " << size << " elements for second array: ";
    for (int i = 0; i < size; i++) {
        cin >> array2[i];
    }

    cout << "Are the two integer arrays equal? " << (compareData(array1, array2, size) ? "Yes" : "No") << endl;

    delete[] array1;
    delete[] array2;
    return 0;
}
