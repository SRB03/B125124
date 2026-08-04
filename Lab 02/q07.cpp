#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    // Declaring data members
    int productID;
    string productName;
    int quantity;
    double pricePerUnit;

public:
    // Declaring methods
    void getDetails();
    void sellProduct();
    double totalValue();
    void displayDetails();
};

// Declaring body of methods
void Product::getDetails() {
    cout << "Enter Product ID: ";
    cin >> productID;
    cout << "Enter Product Name: ";
    cin >> productName;
    cout << "Enter Quantity Available: ";
    cin >> quantity;
    cout << "Enter Price per Unit: ";
    cin >> pricePerUnit;
}

void Product::sellProduct() {
    int unitsSold;
    cout << "\nEnter quantity to sell: ";
    cin >> unitsSold;
    
    if (unitsSold < 0) {
        cout << "\nInvalid quantity to sell" << endl;
    } else if (unitsSold > quantity) {
        cout << "\nError: Not enough stock available!" << endl;
    } else {
        quantity -= unitsSold;
        cout << unitsSold << " units sold successfully." << endl;
    }
}

double Product::totalValue() {
    return quantity * pricePerUnit;
}

void Product::displayDetails() {
    cout << "\nProduct ID      : " << productID;
    cout << "\nProduct Name    : " << productName;
    cout << "\nStock Available : " << quantity;
    cout << "\nPrice Per Unit  : ₹" << pricePerUnit;
    cout << "\nInventory Value : ₹" << totalValue() << endl;
}

int main() {
    Product prod;
    prod.getDetails();
    prod.sellProduct();
    prod.displayDetails();

    return 0;
}