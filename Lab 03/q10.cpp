#include <iostream>
using namespace std;

class Employee {
    // data members
    string name;
    int id;
    float salary;
    int n_months;
    int* monthly_earnings = new int[n_months];
public:
    // Constructor to get details
    Employee() {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter the number of months: ";
        cin >> n_months;
        for(int i = 0; i < n_months; ++i) {
            cout << "Enter earnings for month " << (i + 1) << ": ";
            cin >> monthly_earnings[i];
        }
    }

    // method to calculate the total earnings
    int total_earnings() {
        int total = 0;
        for(int i = 0; i < n_months; ++i) {
            total += monthly_earnings[i];
        }
        return total;
    }

    // method to calculate the month with max earning 
    int max_earning_month() {
        int max = monthly_earnings[0];
        int max_month = 1;
        for(int i = 1; i < n_months; ++i) {
            if(max < monthly_earnings[i]) {
                max = monthly_earnings[i];
                max_month = i + 1;
            }
        }
        return max_month;
    }

    // method to calculate average
    int average_earning() {
        return total_earnings() / n_months;
    }

    // Method to display details
    void display() {
        cout << "\nEmployee Details:\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Monthly Earnings:\n";
        for(int i = 0; i < n_months; ++i) {
            cout << "Month " << (i + 1) << ": " << monthly_earnings[i] << endl;
        }

        cout << "Total Earnings: " << total_earnings() << endl;
        cout << "Maximum Earning Month: " << max_earning_month() << endl;
        cout << "Average Earnings: " << average_earning() << endl;
    }

    // Destructor to free the memory from the monthly_earnings array
    ~Employee(){
        delete[] monthly_earnings;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee *e = new Employee[n];
    for(int i = 0; i < n; ++i) {
        e[i].display();
    }

    // Freeing the dynamically allocated memory of the object
    delete[] e;

    return 0;
}