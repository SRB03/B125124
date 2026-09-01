#include <iostream>
using namespace std;

void display(int* p, int n){
    for(int i=0; i<n; i++){
        cout << "ID: " << p[i] << " Addr: " << &p[i] <<endl;
    }
}

int main(){
    int *IDs = new int[6];
    for(int i=0; i<6; i++)
        IDs[i] = i+10;
    display(IDs, 6);
    return 0;
}