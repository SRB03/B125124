#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int d = 1, int m = 1, int y = 2000){
        day =d;
        month=m;
        year=y;
    } 

    bool operator==(Date d){
        return (day == d.day && month == d.month && year == d.year);
    }

    void display(){
        cout << "Date:" << day << " " <<  month << " " << year << endl;
    }
};

int main() {
    Date d1(10, 10, 2026), d2(29, 9, 2026);
    d1.display();
    d2.display();

    if (d1 == d2)
        cout << "Both dates are equal." << endl;
    else
        cout << "Dates are not equal." << endl;
}
