#include <iostream>
using namespace std;

class Door {
    int doorNumber;
    bool isLocked;
public:
    Door() {
        cout << "Enter Door Number: ";
        cin >> doorNumber;
        cout << "Enter Lock Status (1 for Locked, 0 for Unlocked): ";
        cin >> isLocked;
    }

    friend class SecuritySystem;
};

class SecuritySystem {
public:
    void checkDoor(Door D) {
        cout << "\nDoor Status: " << endl;
        cout << "Door Number: " << D.doorNumber << endl;
        if (D.isLocked)
            cout << "Lock Status: Locked" << endl;
        else
            cout << "Lock Status: Unlocked" << endl;
    }
};

int main() {
    Door *D = new Door();
    SecuritySystem *S = new SecuritySystem();

    S->checkDoor(*D);

    delete D;
    delete S;
    return 0;
}