#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double base;
public:
    Employee(string n, double b) {
        name=n;
        base=b;
    }
};

class Developer : public Employee {
protected:
    int exp;

public:
    Developer(string n, double b, int e) : Employee(n, b) {
        exp = e;
    }
};

class SeniorDeveloper : public Developer {
    double bonus;

public:
    SeniorDeveloper(string n, double b, int e, double p) : Developer(n, b, e) {
        bonus = p;
    }

    void show(){
        double expBon = 0.05*base*exp;
        double total = base + expBon + bonus;
        cout<<"Name: "<<name<<endl;
        cout<<"Basic Salary: "<<base<<endl;
        cout<<"Experience: "<<exp<<" years" << endl;
        cout<<"Experience Bonus: "<<expBon<<endl;
        cout<<"Project Bonus: "<<bonus<<endl;
        cout<<"Final Salary: "<<total<<endl;
    }
};

int main() {
    SeniorDeveloper dev("Vaibhav", 50000, 4, 15000);
    dev.show();
    return 0;
}
