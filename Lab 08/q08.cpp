#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double cpuHours) {
        cout << "Calculating cloud usage cost..." << endl;
    }
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5.0; // Rs. 5/hr
        if (cpuHours > 100) {
            cost *= 0.85; // 15% discount
        }
        cout << "Standard Instance (" << cpuHours << " hrs): Rs. " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12.0; // Rs. 12/hr
        if (cpuHours > 100) {
            cost *= 0.85; // 15% discount
        }
        cout << "Premium Instance (" << cpuHours << " hrs) : Rs. " << cost << endl;
    }
};

int main() {
    StandardInstance standard;
    PremiumInstance premium;

    cout << "--- Usage: 80 hours ---" << endl;
    standard.calculateCost(80);
    premium.calculateCost(80);

    cout << "\n--- Usage: 120 hours (> 100 discount applied) ---" << endl;
    standard.calculateCost(120);
    premium.calculateCost(120);

    return 0;
}
