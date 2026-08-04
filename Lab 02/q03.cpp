#include <iostream>
using namespace std;

class Calculator {
private:
    // Declaring data members
    float num1, num2;

public:
    // Declaring methods
    void getNumbers();
    void add();
    void subtract();
    void multiply();
    void divide();
};

// Declaring body of methods
void Calculator::getNumbers() {
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
}

void Calculator::add() {
    cout << "Addition: " << num1 + num2 << endl;
}

void Calculator::subtract() {
    cout << "Subtraction: " << num1 - num2 << endl;
}

void Calculator::multiply() {
    cout << "Multiplication: " << num1 * num2 << endl;
}

void Calculator::divide() {
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division: Error! Division by zero is not allowed." << endl;
    }
}

int main() {
    Calculator calc;
    calc.getNumbers();
    
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}