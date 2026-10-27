#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot moving..." << endl;
    }
    virtual ~Robot() {}
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        // speed = 2.0 m/s
        double timeTaken = distance / 2.0;
        cout << "Wheeled Robot moved " << distance 
             << " m | Speed: 2.0 m/s | Time: " << timeTaken << " sec" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        // speed = 1.2 m/s
        double timeTaken = distance / 1.2;
        cout << "Tracked Robot moved " << distance 
             << " m | Speed: 1.2 m/s | Time: " << timeTaken << " sec" << endl;
    }
};

int main() {
    double dist = 24.0; // 24 meters

    // Using base class pointers to demonstrate runtime polymorphism
    Robot* rPtr = nullptr;

    WheeledRobot wheeled;
    TrackedRobot tracked;

    rPtr = &wheeled;
    rPtr->move(dist);

    rPtr = &tracked;
    rPtr->move(dist);

    return 0;
}
