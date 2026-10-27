#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning for security threats..." << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic Scanner" << endl;
        cout << "Threats detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int removed = threats * 0.90; // removes 90%
        int remaining = threats - removed;
        cout << "Advanced Scanner" << endl;
        cout << "Threats detected : " << threats << endl;
        cout << "Threats removed  : " << removed << endl;
        cout << "Threats remaining: " << remaining << endl;
    }
};

int main() {
    int detectedCount = 50;

    BasicScanner basic;
    AdvancedScanner adv;

    basic.scan(detectedCount);
    cout << endl;
    adv.scan(detectedCount);

    return 0;
}
