#include <iostream>
using namespace std;

// to perform an operation on two integers
int dataProcessor(int a, int b) {
    return a + b;
}

// to perform an operation on an integer and a floating-point value
float dataProcessor(int a, float b) {
    return a + b;
}

// to perform an operation on two floating-point values
float dataProcessor(float a, float b) {
    return a + b;
}

// to perform an operation on an integer array and its size
int dataProcessor(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// to perform an operation on two integer pointers
int dataProcessor(int *a, int *b) {
    return *a + *b;
}

int main() {
    int intValue, intValue2;
    float floatValue, floatValue2;
    int size;

    cout << "Enter two integers: ";
    cin >> intValue >> intValue2;
    cout << "Operation on two integers: " << dataProcessor(intValue, intValue2) << endl;

    cout << "Enter an integer and a floating-point value: ";
    cin >> intValue >> floatValue;
    cout << "Operation on integer and float: " << dataProcessor(intValue, floatValue) << endl;

    cout << "Enter two floating-point values: ";
    cin >> floatValue >> floatValue2;
    cout << "Operation on two floats: " << dataProcessor(floatValue, floatValue2) << endl;

    cout << "Enter size of integer array: ";
    cin >> size;
    int *intArray = new int[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> intArray[i];
    }
    cout << "Operation on integer array: " << dataProcessor(intArray, size) << endl;

    int ptrValue1, ptrValue2;
    cout << "Enter two integers for pointer-based operation: ";
    cin >> ptrValue1 >> ptrValue2;
    cout << "Operation on two integer pointers: " << dataProcessor(&ptrValue1, &ptrValue2) << endl;

    delete[] intArray;
    return 0;
}
