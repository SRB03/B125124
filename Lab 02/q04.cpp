#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Declaring data members
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Declaring methods
    void getAccountDetails();
    void deposit();
    void withdraw();
    void displayDetails();
};

// Declaring body of methods
void BankAccount::getAccountDetails() {
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Account Holder Name: ";
    cin >> accountHolderName;
    cout << "Enter Initial Balance: ";
    cin >> balance;
}

void BankAccount::deposit() {
    double amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "\nSuccessfully deposited ₹" << amount << endl;
    } else {
        cout << "\nInvalid deposit amount!" << endl;
    }
}

void BankAccount::withdraw() {
    double amount;
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "\nTransaction Failed: Insufficient balance!" << endl;
    } else if (amount <= 0) {
        cout << "\nInvalid withdrawal amount!" << endl;
    } else {
        balance -= amount;
        cout << "\nSuccessfully withdrew ₹" << amount << endl;
    }
}

void BankAccount::displayDetails() {
    cout << "\nAccount Details" << endl;
    cout << "Account Number : " << accountNumber << endl;
    cout << "Holder Name    : " << accountHolderName << endl;
    cout << "Current Balance: ₹" << balance << endl;
}

int main() {
    BankAccount account;
    account.getAccountDetails();
    
    account.displayDetails();
    
    account.deposit();
    account.withdraw();
    
    account.displayDetails();

    return 0;
}