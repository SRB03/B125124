#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string regNo;
    int days;

public:
    Vehicle(string r, int d) {
        regNo = r;
        days = d;
    }
};

class Car : public Vehicle {
protected:
    double rate;

public:
    Car(string r, int d, double rt) : Vehicle(r, d) {
        rate = rt;
    }
};

class LuxuryCar : public Car {
    double extra;

public:
    LuxuryCar(string r, int d, double rt, double ex) : Car(r, d, rt) {
        extra = ex;
    }

    void show() {
        double cost = (rate + extra) * days;
        cout << "Reg No: " << regNo << endl;
        cout << "Days: " << days << endl;
        cout << "Daily Rate: " << rate << endl;
        cout << "Extra Charge: " << extra << endl;
        cout << "Total Rental Cost: " << cost << endl;
    }
};

int main() {
    LuxuryCar car("OD02M8375", 5, 2000, 800);
    car.show();
    return 0;
}
