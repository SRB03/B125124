#include <iostream>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) {
        return 0.0;
    }
};

class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        double travelMinutes = (distance / 20.0) * 60.0;
        return travelMinutes + 5.0;
    }
};

class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        double travelMinutes = (distance / 40.0) * 60.0;
        return travelMinutes + 2.0;
    }
};

int main() {
    double dist = 10.0;

    BikeDelivery bike;
    DroneDelivery drone;

    cout << "Distance: " << dist << " km" << endl;
    cout << "Bike Delivery Time : " << bike.estimateTime(dist) << " mins" << endl;
    cout << "Drone Delivery Time: " << drone.estimateTime(dist) << " mins" << endl;

    return 0;
}
