#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    // Declaring data members
    int consumerNumber;
    string consumerName;
    int units;
    double totalBill;

public:
    // Declaring methods
    void getDetails();
    void calculateBill();
    void displayBill();
};


// Declaring body of methods
void ElectricityBill::getDetails() {
    cout << "Enter Consumer Number: ";
    cin >> consumerNumber;
    cout << "Enter Consumer Name: ";
    cin >> consumerName;
    cout << "Enter Units Consumed: ";
    cin >> units;
}

void ElectricityBill::calculateBill() {
    if (units <= 100) {
        totalBill = units * 5;
    } else if (units <= 200) {
        totalBill = (100 * 5) + ((units - 100) * 7);
    } else {
        totalBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
}

void ElectricityBill::displayBill() {
    cout << "\nConsumer Number: " << consumerNumber;
    cout << "\nConsumer Name: " << consumerName;
    cout << "\nUnits Consumed: " << units;
    cout << "\nTotal Amount: " << totalBill << endl;
}

int main() {
    ElectricityBill bill;
    bill.getDetails();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}