#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    long accNo;
    double bal;

public:
    BankAccount(long a, double b){
        accNo = a;
        bal = b;
    }
};

class SavingsAccount : public BankAccount{
    double rate;

public:
    SavingsAccount(long a, double b, double r): BankAccount(a, b){
        rate = r;
    }

    void addInterest() {
        double intr = (bal*rate)/100;
        bal = bal+intr;
        cout << "Savings Account: " << accNo << endl;
        cout << "Interest Added: " << intr << endl;
        cout << "Updated Balance: " << bal << endl;
    }
};

class CurrentAccount: public BankAccount{
    double minBal;
    double fee;

public:
    CurrentAccount(long a, double b, double m, double f): BankAccount(a, b){
        minBal = m;
        fee = f;
    }

    void checkBalance(){
        cout << "Current Account: " << accNo << endl;
        if (bal < minBal) {
            bal = bal - fee;
            cout << "Penalty Charged: " << fee << endl;
        } else {
            cout << "No penalty charged." << endl;
        }
        cout << "Updated Balance: " << bal << endl;
    }
};

int main() {
    SavingsAccount sa(1001, 10000, 5.2);
    CurrentAccount ca(1002, 30000, 5000, 200);

    sa.addInterest();
    cout << endl;
    ca.checkBalance();
 
    return 0;
}