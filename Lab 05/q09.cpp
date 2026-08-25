#include <iostream>
using namespace std;

// to find the maximum value between two integers
int maximumValue(int a, int b) {
    return (a > b) ? a : b;
}

// to find the maximum value between two values accessed through integer pointers
int maximumValue(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

// to find the maximum value among all elements of an integer array using a pointer and its size
int maximumValue(int arr[], int size) {
    int maxVal = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int num1, num2;
    int size;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Maximum value between " << num1 << " and " << num2 << " is: " << maximumValue(num1, num2) << endl;

    int x, y;
    cout << "Enter two integer values for pointer comparison: ";
    cin >> x >> y;
    cout << "Maximum value using pointers is: " << maximumValue(&x, &y) << endl;

    cout << "Enter size of integer array: ";
    cin >> size;
    int *intArray = new int[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> intArray[i];
    }
    cout << "Maximum value in the integer array is: " << maximumValue(intArray, size) << endl;

    delete[] intArray;
    return 0;
}
