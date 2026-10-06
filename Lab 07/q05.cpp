#include <iostream>
using namespace std;

class Academic {
protected:
    int m1;
    int m2;
    int m3;

public:
    Academic(int a, int b, int c) {
        m1 = a;
        m2 = b;
        m3 = c;
    }
};

class Sports {
protected:
    int smark;

public:
    Sports(int s) {
        smark = s;
    }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(int a, int b, int c, int s) : Academic(a, b, c), Sports(s) {}

    void display() {
        int total = m1 + m2 + m3 + smark;
        double avg = total / 4.0;
        cout << "Subject 1: " << m1 << endl;
        cout << "Subject 2: " << m2 << endl;
        cout << "Subject 3: " << m3 << endl;
        cout << "Sports Marks: " << smark << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

int main() {
    StudentResult res(85, 90, 80, 95);
    res.display();
    return 0;
}