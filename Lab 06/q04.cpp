#include <iostream>
using namespace std;

void display(int* p, int n){
    for(int i=0; i<n; i++){
        cout << *(p+i) << " ";
    }
    cout << endl;
}

void update(int* p, int pos, int newVal){
    *(p + pos -1) = newVal;
}

int main(){
    int *seats = new int[8];
    for(int i=0; i<8; i++)
    seats[i] = i+15;
    
    cout << "Current Seatnumber: ";
    display(seats, 8);
    
    update(seats, 3, 8);
    cout << "Seat number after update: ";
    display(seats, 8);
    return 0;
}