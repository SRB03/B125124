#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int in = 0){
        feet = f;
        inches = in;
    }

    Distance operator+(Distance d){
        int totalInches = inches + d.inches;
        int totalFeet = feet + d.feet + (totalInches / 12);
        totalInches %= 12;
        return Distance(totalFeet, totalInches);
    }

    void display(){
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main(){
    Distance dist1(5, 8), dist2(3, 7);
    Distance distResult = dist1 + dist2;
    distResult.display();

    return 0;
}