#include <iostream>
using namespace std;

// search for an integer in an integer array
int searchElement(int arr[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

// search for a character in a character array
int searchElement(char arr[], int size, char element) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

// search for an integer within a specified range
int searchElement(int arr[], int startIndex, int endIndex, int element) {
    for(int i = startIndex; i <= endIndex; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int m, intTarg;
    cout << "Enter size of int array: ";
    cin >> m;
    int *intArray = new int[m];
    cout << "Enter " << m << " integers: ";
    for (int i = 0; i < m; i++)
        cin >> intArray[i];
    cout << "Enter target int: ";
    cin >> intTarg;

    int intIndex = searchElement(intArray, m, intTarg);
    if (intIndex != -1)
        cout << "Index of " << intTarg << " in integer array: " << intIndex << endl;
    else
        cout << "Value not found in integer array!\n";

    int n;
    char charTarg;
    cout << "Enter size of char array: ";
    cin >> n;
    char *charArray = new char[n];
    cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; i++)
        cin >> charArray[i];
    cout << "Enter target char: ";
    cin >> charTarg;

    int charIndex = searchElement(charArray, n, charTarg);
    if (charIndex != -1)
        cout << "Index of '" << charTarg << "' in character array: " << charIndex << endl;
    else
        cout << "Character not found in character array!\n";

    int st, end;
    cout << "Enter start index: ";
    cin >> st;
    cout << "Enter end index: ";
    cin >> end;

    if (st > end) {
        int temp = st;
        st = end;
        end = temp;
    }

    int rangeIndex = searchElement(intArray, st, end, intTarg);
    if (rangeIndex != -1)
        cout << "Value " << intTarg << " found in range [" << st << ", " << end << "] at index: " << rangeIndex << endl;
    else
        cout << "Value not found in the given range!\n";

    delete[] intArray;
    delete[] charArray;
    return 0;
}