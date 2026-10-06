#include <iostream>
using namespace std;

class InternalExam {
protected:
    int imark;

public:
    InternalExam(int m) {
        imark = m;
    }

    void display() {
        cout << "Internal Marks: " << imark << endl;
    }
};

class ExternalExam {
protected:
    int emark;

public:
    ExternalExam(int m) {
        emark = m;
    }

    void display() {
        cout << "External Marks: " << emark << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    FinalResult(int i, int e) : InternalExam(i), ExternalExam(e) {}

    void show() {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult res(45, 88);
    res.show();
    return 0;
}
