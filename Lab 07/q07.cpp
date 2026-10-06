#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() {
        name = "";
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : virtual public Person {
protected:
    int roll;
    double cgpa;

public:
    Student(string n, int a, int r, double c) : Person(n, a) {
        roll = r;
        cgpa = c;
    }
};

class Employee : virtual public Person {
protected:
    int empId;
    double sal;

public:
    Employee(string n, int a, int id, double s) : Person(n, a) {
        empId = id;
        sal = s;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, double c, int id, double s)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id, s) {
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << sal << endl;
    }
};

int main() {
    TeachingAssistant ta("Rohan", 23, 105, 8.9, 501, 25000);
    ta.show();
    return 0;
}
