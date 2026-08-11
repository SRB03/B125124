#include <iostream>
using namespace std;

class Student {
    // Data members
    string name;
    int roll_no;
    int n_subs;
    int* marks = new int[n_subs];
    int total_marks;
    float avg;
public:
    // Constructors
    Student(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter number of subjects: ";
        cin >> n_subs;
        cout << "Enter marks for " << n_subs << " subjects:\n";
        for(int i = 0; i < n_subs; ++i) {
            cin >> marks[i];
        }
    }
    // Method to calculate avg
    void calculate_average() {
        for(int i = 0; i < n_subs; ++i) {
            total_marks += marks[i];
        }
        avg = (float)total_marks/n_subs;
    }

    // Method to display details
    void display() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Average Marks: " << avg << endl;
    }
    
    // Destructor to free the memory for dynamically allocated marks array
    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student *s = new Student();
    s->calculate_average();
    s->display();

    // Freeing the dynamically allocated memory for the object
    delete s;
    
    return 0;
}