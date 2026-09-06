#include <iostream>
using namespace std;

void display(int* p){
    cout << "Current battery percentage: " << *p << endl;
}

void charge(int* battPer, int inc){
    cout << "Battery percentage increase by " << inc << endl; 
    *battPer += inc;
}

int main(){
    int battPer = 20;
    int* ptr = &battPer;

    display(ptr);
    charge(ptr, 30);
    display(ptr);

    return 0;
}