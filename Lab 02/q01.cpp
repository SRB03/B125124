#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Declaring data members
    string roll_no;
    string name;
    int marks;
public:
    // Declaring methods
    void getData();
    void printData();
};

// Defining the boday of getData method
void Student::getData(){
    cout << "Enter name: ";
    cin >> name ;

    cout << "Enter roll no: ";
    cin >> roll_no;

    cout << "Enter marks: ";
    cin >> marks;
}

// Defining the boday of printData method
void Student::printData(){
    cout << "Name: " << name << endl;
    cout << "Roll no: " << roll_no << endl;
    cout << "Marks: " << marks << endl;
}

int main(){
    Student S1;
    S1.getData();
    cout << endl;
    S1.printData();

    return 0;
}
