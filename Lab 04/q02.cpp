#include <iostream>
using namespace std;

class Mobile{
    string brand;
    string model;
    int batt_per;
public:
    Mobile(){
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter battery %:";
        cin >> batt_per;
    }
    friend void checkBattery(Mobile);
};

void checkBattery(Mobile M){
    cout << "Brand: " << M.brand << endl;
    cout << "Model: " << M.model << endl;

    string batt_status = (M.batt_per < 20) ? "Battery Low" : "Battery normal";
    cout << batt_status << endl;
}

int main(){
    Mobile* M = new Mobile();
    checkBattery(*M);

    delete M;
    return 0;
}