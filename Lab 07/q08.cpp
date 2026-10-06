#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string name;
    int pid;
    int age;

public:
    Patient(string n, int id, int a) {
        name = n;
        pid = id;
        age = a;
    }
};

class InPatient : public Patient {
    double rate;
    int days;

public:
    InPatient(string n, int id, int a, double r, int d) : Patient(n, id, a) {
        rate = r;
        days = d;
    }

    void show() {
        double bill = rate * days;
        cout << "Patient Name: " << name << endl;
        cout << "Patient ID: " << pid << endl;
        cout << "Age: " << age << endl;
        cout << "Room Charge per day: " << rate << endl;
        cout << "Days Admitted: " << days << endl;
        cout << "Total Bill: " << bill << endl;
    }
};

int main() {
    InPatient p1("Suresh", 401, 45, 1200, 6);
    p1.show();
    return 0;
}