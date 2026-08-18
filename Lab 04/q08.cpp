#include <iostream>
using namespace std;

class TrainSeat {
    int seat_num;
    string passenger_name;
    bool isBooked;
public:
    TrainSeat() {
        cout << "Enter Seat Number: ";
        cin >> seat_num;
        cout << "Is seat booked? (1 for Yes, 0 for No): ";
        cin >> isBooked;
        if (isBooked) {
            cout << "Enter Passenger Name: ";
            cin >> passenger_name;
        } else {
            passenger_name = "N/A";
        }
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void displaySeatDetails(TrainSeat T) {
        cout << "\nSeat Details: " << endl;
        cout << "Seat Number   : " << T.seat_num << endl;
        cout << "Booking Status: " << (T.isBooked ? "Booked" : "Available") << endl;
        if (T.isBooked) {
            cout << "Passenger Name: " << T.passenger_name << endl;
        }
    }

    void checkBookingStatus(TrainSeat T) {
        if (T.isBooked)
            cout << "Seat " << T.seat_num << " is Booked." << endl;
        else
            cout << "Seat " << T.seat_num << " is Available." << endl;
    }

    void displayPassengerName(TrainSeat T) {
        if (T.isBooked)
            cout << "Passenger: " << T.passenger_name << endl;
        else
            cout << "No passenger (Seat is empty)." << endl;
    }
};

int main() {
    TrainSeat *T = new TrainSeat();
    TicketChecker *TC = new TicketChecker();

    TC->displaySeatDetails(*T);
    TC->checkBookingStatus(*T);
    TC->displayPassengerName(*T);

    delete T;
    delete TC;
    return 0;
}