#include <iostream>
using namespace std;

// to count the number of digits in an integer
int countOperation(int num) {
    int count = 0;
    while(num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// to count the number of elements in an integer array
int countOperation(int arr[], int size) {
    return size;
}

// to count the occurrences of a given character in a character array
int countOperation(char arr[], int size, char ch) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    int intSize, charSize;
    char ch;

    cout << "Enter an integer: ";
    cin >> num;
    cout << "Number of digits in " << num << " is: " << countOperation(num) << endl;

    cout << "Enter size of integer array: ";
    cin >> intSize;
    int *intArray = new int[intSize];
    cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; i++) {
        cin >> intArray[i];
    }
    cout << "Number of elements in integer array: " << countOperation(intArray, intSize) << endl;

    cout << "Enter size of character array: ";
    cin >> charSize;
    char *charArray = new char[charSize];
    cout << "Enter " << charSize << " characters: ";
    for (int i = 0; i < charSize; i++) {
        cin >> charArray[i];
    }
    cout << "Enter a character to count: ";
    cin >> ch;
    cout << "Number of occurrences of '" << ch << "' in character array: " << countOperation(charArray, charSize, ch) << endl;

    delete[] intArray;
    delete[] charArray;
    return 0;
}