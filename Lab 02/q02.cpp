#include <iostream>
using namespace std;

class Rectangle {
private:
    // Declaring data members
    float length, breadth;
    float area, perimeter;
public:
    // Declaring methods
    void getData();
    void printData();
};

// Defining the body of getData method
void Rectangle::getData(){
    cout << "Enter lenght: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);
}

// Defining the body of printData method
void Rectangle::printData(){
    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

int main(){
    Rectangle S1;
    S1.getData();
    cout << endl;
    S1.printData();

    return 0;
}
