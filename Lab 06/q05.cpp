#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0){
        hours = h;
        minutes=m;
    }

    Time operator+(Time t){
        int totalMinutes = minutes + t.minutes;
        int totalHours = hours + t.hours + (totalMinutes / 60);
        totalMinutes %= 60;
        return Time(totalHours, totalMinutes);
    }

    void display(){
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(4, 45), t2(2, 30);
    Time tResult = t1 + t2;
    tResult.display();
    return 0;
}
