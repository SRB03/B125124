#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    // Declaring data members
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    double fine;

public:
    // Declaring methods
    void getDetails();
    void calculateFine();
    void displayTransaction();
};


// Declaring body of methods
void LibraryBook::getDetails() {
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Book Title: ";
    cin >> bookTitle;
    cout << "Enter Student Name: ";
    cin >> studentName;
    cout << "Enter Days Issued: ";
    cin >> daysIssued;
}

void LibraryBook::calculateFine() {
    if (daysIssued > 15) {
        fine = (daysIssued - 15) * 2;
    } else {
        fine = 0.0;
    }
}

void LibraryBook::displayTransaction() {
    cout << "\nBook ID: " << bookID;
    cout << "\nBook Title: " << bookTitle;
    cout << "\nStudent Name: " << studentName;
    cout << "\nDays Issued: " << daysIssued;
    cout << "\nFine Charged: " << fine << endl;
}

int main() {
    LibraryBook book;
    book.getDetails();
    book.calculateFine();
    book.displayTransaction();

    return 0;
}