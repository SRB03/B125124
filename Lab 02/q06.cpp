#include <iostream>
using namespace std;

class Distance {
private:
    // Declaring data members
    int feet;
    int inches;

public:
    // Declaring methods
    void getDistance();
    Distance addDistance(Distance d2);
    void displayDistance();
};

// Declaring body of methods
void Distance::getDistance() {
    cout << "Enter Feet: ";
    cin >> feet;
    cout << "Enter Inches: ";
    cin >> inches;
}

Distance Distance::addDistance(Distance d2) {
    Distance sum;
    sum.feet = feet + d2.feet;
    sum.inches = inches + d2.inches;

    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }

    return sum;
}

void Distance::displayDistance() {
    cout << feet << " ft " << inches << " in" << endl;
}

int main() {
    Distance d1, d2, total;

    cout << "Enter First Distance:" << endl;
    d1.getDistance();

    cout << "\nEnter Second Distance:" << endl;
    d2.getDistance();

    total = d1.addDistance(d2);

    cout << "\nTotal Distance: ";
    total.displayDistance();

    return 0;
}