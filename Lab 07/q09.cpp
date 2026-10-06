#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
        cout << "Person constructor" << endl;
    }
};

class Employee : public Person {
protected:
    int empId;

public:
    Employee(string n, int id) : Person(n) {
        empId = id;
        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee {
    string dept;

public:
    Manager(string n, int id, string d) : Employee(n, id) {
        dept = d;
        cout << "Manager constructor" << endl;
    }

    void show() {
        cout << endl << "Manager Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Department: " << dept << endl;
    }
};

int main() {
    Manager mgr("Vikram", 301, "Sales");
    mgr.show();
    return 0;
}
