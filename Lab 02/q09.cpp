#include <iostream>
#include <string>
using namespace std;

class StudentResult {
private:
    // Declaring data members
    string name;
    string roll_no;
    float marks[5];
    float totalMarks;
    float percentage;
    char grade;

public:
    // Declaring methods
    void getDetails();
    void calculateResult();
    void displayResult();
};

// Declaring body of methods
void StudentResult::getDetails() {
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> roll_no;
    
    cout << "Enter marks for 5 subjects:" << endl;
    totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }
}

void StudentResult::calculateResult() {
    percentage = (totalMarks / 500.0) * 100;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';
}

void StudentResult::displayResult() {
    cout << "\nName: " << name;
    cout << "\nRoll Number: " << roll_no;
    cout << "\nTotal Marks: " << totalMarks << " / 500";
    cout << "\nPercentage: " << percentage << "%";
    cout << "\nGrade: " << grade << endl;
}

int main() {
    StudentResult student;
    student.getDetails();
    student.calculateResult();
    student.displayResult();

    return 0;
}