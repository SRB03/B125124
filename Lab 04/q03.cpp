#include <iostream>
using namespace std;

class ParkingSlot {
    int slotNumber;
    string vehicleNumber;
    bool isOccupied;
public:
    ParkingSlot() {
        cout << "Enter Slot Number: ";
        cin >> slotNumber;
        cout << "Is slot occupied? (1 for Yes, 0 for No): ";
        cin >> isOccupied;
        if (isOccupied) {
            cout << "Enter Vehicle Number: ";
            cin >> vehicleNumber;
        } else {
            vehicleNumber = "N/A";
        }
    }

    friend void checkSlot(ParkingSlot P);
};

void checkSlot(ParkingSlot P) {
    cout << "\nParking Slot Details: " << endl;
    cout << "Slot Number: " << P.slotNumber << endl;
    if (P.isOccupied) {
        cout << "Status     : Occupied" << endl;
        cout << "Vehicle No : " << P.vehicleNumber << endl;
    } else {
        cout << "Status     : Available" << endl;
    }
}

int main() {
    ParkingSlot *P = new ParkingSlot();
    checkSlot(*P);

    delete P;
    return 0;
}