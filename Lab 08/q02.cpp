#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
        cout << "Calculating parking fee..." << endl;
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 10.0;
        if (hours > 5) {
            fee = fee - (0.10 * fee); // 10% discount
        }
        cout << "Two-Wheeler (" << hours << " hrs) Fee: Rs" << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 30.0;
        if (hours > 5) {
            fee = fee - (0.10 * fee); // 10% discount
        }
        cout << "Four-Wheeler (" << hours << " hrs) Fee: Rs" << fee << endl;
    }
};

int main() {
    int hours = 5;
    
    TwoWheelerSlot bike;
    FourWheelerSlot car;

    bike.calculateFee(hours);
    car.calculateFee(hours);

    return 0;
}
