#include <iostream>
using namespace std;

class SmartDevice {
    string name;
    string type;
    bool power_stat;
public:
    SmartDevice() {
        cout << "Enter Device Name: ";
        cin >> name;
        cout << "Enter Device Type: ";
        cin >> type;
        cout << "Enter Initial Power Status (1 for ON, 0 for OFF): ";
        cin >> power_stat;
    }

    friend class HomeController;
};

class HomeController {
public:
    void displayInfo(SmartDevice S) {
        cout << "\nDevice Info: " << endl;
        cout << "Name  : " << S.name << endl;
        cout << "Type  : " << S.type << endl;
        cout << "Status: " << (S.power_stat ? "ON" : "OFF") << endl;
    }

    // Must use SmartDevice &S so modifications affect the original device
    void turnON(SmartDevice &S) {
        S.power_stat = true;
        cout << S.name << " is turned ON." << endl;
    }

    void turnOFF(SmartDevice &S) {
        S.power_stat = false;
        cout << S.name << " is turned OFF." << endl;
    }

    void checkStatus(SmartDevice S) {
        cout << "Current Power Status: " << (S.power_stat ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice *S = new SmartDevice();
    HomeController *H = new HomeController();

    H->displayInfo(*S);
    H->turnON(*S);
    H->checkStatus(*S);
    H->turnOFF(*S);
    H->checkStatus(*S);

    delete S;
    delete H;
    return 0;
}