#include <iostream>
using namespace std;

class Temperature{
private:
    double celsius;

public:
    Temperature(double c = 0.0){
        celsius=c;
    }

    bool operator<(Temperature t){
        return this->celsius < t.celsius;
    }

    bool operator>(Temperature t){
        return this->celsius > t.celsius;
    }

    bool operator==(Temperature t){
        return this->celsius == t.celsius;
    }

    double getTemp(){ return celsius; }
};

int main(){
    Temperature temp1(36.5), temp2(38.0);
    if (temp1 > temp2)
        cout << "First temperature is higher." << endl;
    else if (temp1 < temp2)
        cout << "First temperature is lower." << endl;
    else
        cout << "Both temperatures are equal." << endl;
}
