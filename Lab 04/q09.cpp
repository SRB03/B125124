#include <iostream>
using namespace std;

class Exam {
    string name;
    string subject;
    float marks;
    float max_marks;
public:
    Exam() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Marks: ";
        cin >> marks;
        cout << "Enter Maximum Marks: ";
        cin >> max_marks;
    }

    friend class Result;
};

class Result {
public:
    float calcPercentage(Exam E) {
        return (E.marks / E.max_marks) * 100.0;
    }

    void displayResult(Exam E) {
        float per = calcPercentage(E);
        cout << "\nExam Result: " << endl;
        cout << "Student Name: " << E.name << endl;
        cout << "Subject     : " << E.subject << endl;
        cout << "Marks       : " << E.marks << "/" << E.max_marks << endl;
        cout << "Percentage  : " << per << "%" << endl;
        
        if (per >= 40.0)
            cout << "Status      : Pass" << endl;
        else
            cout << "Status      : Fail" << endl;
    }
};

int main() {
    Exam *E = new Exam();
    Result *R = new Result();

    R->displayResult(*E);

    delete E;
    delete R;
    return 0;
}