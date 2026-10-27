#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Moisture level: " << moisture << "%" << endl;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 2.0 * (100.0 - moisture);
        cout << "Drip Irrigation requires: " << water << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 3.0 * (100.0 - moisture);
        cout << "Sprinkler Irrigation requires: " << water << " litres" << endl;
    }
};

int main() {
    double soilMoisture = 35.0;
    cout << "Current Soil Moisture: " << soilMoisture << "%" << endl;

    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    drip.calculateWater(soilMoisture);
    sprinkler.calculateWater(soilMoisture);

    return 0;
}
