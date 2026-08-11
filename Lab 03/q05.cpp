#include <iostream>
using namespace std;

class Student {
    // Data members
    string name;
    int roll_no;
    float marks;
public:
    // Constructor
    Student(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }
    // Display method
    void display() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student *s = new Student();
    s->display();

    return 0;
}