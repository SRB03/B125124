#include <iostream>
using namespace std;

// to display an integer
void displayData(int num) {
    cout << "Integer: " << num << endl;
}

// to display a floating-point number
void displayData(float num) {
    cout << "Float: " << num << endl;
}

// to display a character
void displayData(char ch) {
    cout << "Character: " << ch << endl;
}

// to display all elements of an integer array
void displayData(int arr[], int size) {
    cout << "Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// to display all elements of a character array
void displayData(char arr[], int size) {
    cout << "Array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int num;
    float floatValue;
    char ch;
    int intSize, charSize;

    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter a floating-point number: ";
    cin >> floatValue;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter size of integer array: ";
    cin >> intSize;
    int *intArray = new int[intSize];
    cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; i++) {
        cin >> intArray[i];
    }

    cout << "Enter size of character array: ";
    cin >> charSize;
    char *charArray = new char[charSize];
    cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; i++) {
        cin >> charArray[i];
    }

    displayData(num);
    displayData(floatValue);
    displayData(ch);
    displayData(intArray, intSize);
    displayData(charArray, charSize);

    delete[] intArray;
    delete[] charArray;
    return 0;
}
