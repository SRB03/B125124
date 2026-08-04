#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    // Declaring data members
    int empID;
    string name;
    double basicSalary;
    double hra;
    double da;
    double grossSalary;

public:
    // Declaring methods
    void getDetails();
    void calculateSalary();
    void displayDetails();
};

// Declaring body of methods
void Employee::getDetails() {
    cout << "Enter Employee ID: ";
    cin >> empID;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
}

void Employee::calculateSalary() {
    hra = 0.20 * basicSalary;
    da = 0.10 * basicSalary;
    grossSalary = basicSalary + hra + da;
}

void Employee::displayDetails() {
    cout << "Employee ID  : " << empID << endl;
    cout << "Name         : " << name << endl;
    cout << "Basic Salary : " << basicSalary << endl;
    cout << "HRA (20%)    : " << hra << endl;
    cout << "DA (10%)     : " << da << endl;
    cout << "Gross Salary : " << grossSalary << endl;
}

int main() {
    Employee emp;
    emp.getDetails();
    emp.calculateSalary();
    emp.displayDetails();
    return 0;
}