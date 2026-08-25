#include <iostream>
using namespace std;

// add a specified value to an integer
void modifyValue(int &num, int value) {
    num += value;
}

// add a specified value to a floating-point number
void modifyValue(float &num, float value) {
    num += value;
}

// to modify an integer value using its pointer
void modifyValue(int *num, int value) {
    *num += value;
}

int main() {
    int intValue;
    float floatValue;

    cout << "Enter an integer value: ";
    cin >> intValue;
    cout << "Before modification: " << intValue << endl;
    modifyValue(intValue, 3);
    cout << "After modification: " << intValue << endl;

    cout << "Enter a floating-point value: ";
    cin >> floatValue;
    cout << "Before modification: " << floatValue << endl;
    modifyValue(floatValue, 3.3f);
    cout << "After modification: " << floatValue << endl;

    int pointerValue;
    cout << "Enter an integer value for pointer modification: ";
    cin >> pointerValue;
    cout << "Before modification: " << pointerValue << endl;
    modifyValue(&pointerValue, 5);
    cout << "After modification: " << pointerValue << endl;

    return 0;
}
