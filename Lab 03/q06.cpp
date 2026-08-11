#include <iostream>
using namespace std;

class Employee {
    // Data members
    string name;
    int id;
    float salary;
public:
    // Constructor
    Employee() {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }
    // Display method
    void display() {
        cout << "\nEmployee Details:\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    // Dynamically allocate an array of n Employee objects
    Employee *e = new Employee[n];
    for(int i = 0; i < n; ++i) {
        e[i].display();
    }

    delete[] e;
    
    return 0;
}