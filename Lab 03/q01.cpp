#include <iostream>
using namespace std;

int main() {    
    cout << "Enter value: ";
    int n;
    cin >> n;

    // Dynamically allocate the value
    int *p = new int(n); 
    cout << "Value: " << *p << endl; 

    // Remove the dynamically allocated memory
    delete p;

    return 0;
}