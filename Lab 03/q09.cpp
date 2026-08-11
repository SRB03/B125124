#include <iostream>
using namespace std;

class Product {
    // data members
    int prod_id;
    string prod_name;
    int price;
    int quantity;
public:
    int total_price;
    // Constructor to get details
    Product() {
        cout << "Enter product ID: ";
        cin >> prod_id;
        cout << "Enter product name: ";
        cin >> prod_name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;

        total_price = price * quantity;
    }
};

// Method to calculate total cost
int totalCost(Product *products, int n) {
    int total = 0;
    for(int i = 0; i < n; ++i) {
        total += products[i].total_price;
    }
    return total;
}

int main() {
    cout << "Enter the number of products: ";
    int n;
    cin >> n;
    Product *shopping_cart = new Product[n];

    cout << "Total cost: " << totalCost(shopping_cart, n) << endl;

    // Freeing the dynamically allocated memory for the object
    delete[] shopping_cart;
    return 0;
}