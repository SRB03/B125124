#include <iostream>
using namespace std;

void display(int* p){
    cout << "Current water level: " << *p << endl;
}

void add(int* waterLevel, int inc){
    cout << "Water level increased by " << inc << endl; 
    *waterLevel += inc;
}

void remove(int* waterLevel, int dcr){
    cout << "Battery level decreased by " << dcr << endl; 
    *waterLevel -= dcr;
}

int main(){
    int waterLevel = 20;
    int* ptr = &waterLevel;

    display(ptr);
    add(ptr, 30);
    remove(ptr, 10);
    display(ptr);

    return 0;
}