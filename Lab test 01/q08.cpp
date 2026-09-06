#include <iostream>
using namespace std;


void display(int* marks, int size){
    for(int i=0; i<size; i++){
        cout << *(marks+ i) << " ";
    }
}

void update(int* marks, int size){
    for(int i=0; i<size; i++){
        *(marks+ i) += 5;
    }
}

int main(){
    int marks[8] = {10, 20, 40, 80, 90, 80}; 
    
    cout << "Marks before: ";
    display(marks, 6);
    cout << endl;
    cout << "Marks after: ";
    update(marks, 6);
    display(marks, 6);
    
    return 0;
}