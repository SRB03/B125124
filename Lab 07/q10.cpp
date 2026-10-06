#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string name;

public:
    Employee() {
        empId = 0;
        name = "";
    }

    Employee(int id, string n) {
        empId = id;
        name = n;
    }
};

class Developer : virtual public Employee {
protected:
    string lang;

public:
    Developer(int id, string n, string l) : Employee(id, n) {
        lang = l;
    }
};

class Tester : virtual public Employee {
protected:
    string tool;

public:
    Tester(int id, string n, string t) : Employee(id, n) {
        tool = t;
    }
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, string n, string l, string t)
        : Employee(id, n), Developer(id, n, l), Tester(id, n, t) {
    }

    void show() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Programming Language: " << lang << endl;
        cout << "Testing Tool: " << tool << endl;
    }
};

int main() {
    TechLead lead(701, "Priyansu", "C++", "OOPs");
    lead.show();
    return 0;
}
