#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n = "", int m = 0){
        name = n;
        marks = m;
    }

    bool operator > (Student s){
        return this->marks > s.marks;
    }

    string getName(){
        return name;
    }
    int getMarks(){
        return marks;
    }
};

int main() {
    Student s1("Soumya", 85), s2("Vaibhav", 92);
    if (s1 > s2)
        cout << s1.getName() << " scored higher." << endl;
    else
        cout << s2.getName() << " scored higher." << endl;
    return 0;
}


