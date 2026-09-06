#include <iostream>
using namespace std;

void display(int* status){
    cout << "Status: ";
    if(*status == 1)
        cout << "Processed";
    else if (*status == 2)
        cout << "Shipped";
    else
        cout << "Delivered";

    cout << endl;
}

void updateStatus(int *status){
    (*status) ++;
}

int main(){
    int status = 1;
    cout << "Current ";
    display(&status);

    updateStatus(&status);
    cout << "Updated ";
    display(&status);
    
    return 0;
}