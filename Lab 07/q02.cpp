#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int roll;
    int m1;
    int m2;

public:
    Student(string n, int r, int a, int b) {
        name = n;
        roll = r;
        m1 = a;
        m2 = b;
    }

    virtual void calculateResult(){
        int total = m1 + m2;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class RegularStudent : public Student {
public:
    RegularStudent(string n, int r, int a, int b) : Student(n, r, a, b) {}

    void calculateResult() {
        int total = m1 + m2;
        cout << "Regular Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int r, int a, int b) : Student(n, r, a, b) {}

    void calculateResult() {
        int total = m1 + m2 + 5;
        cout << "Scholarship Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Total Marks (with bonus): " << total << endl;
    }
};

int main() {
    RegularStudent s1("Shubranshu", 118, 80, 85);
    ScholarshipStudent s2("Subhang", 127, 80, 85);

    s1.calculateResult();
    cout << endl;
    s2.calculateResult();

    return 0;
}