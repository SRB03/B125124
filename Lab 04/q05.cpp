#include <iostream>
using namespace std;

class FoodOrder {
    int id;
    string item;
    int qty;
    int price;
public:
    FoodOrder() {
        cout << "Enter Order ID: ";
        cin >> id;
        cout << "Enter Food Item: ";
        cin >> item;
        cout << "Enter Quantity: ";
        cin >> qty;
        cout << "Enter Price per item: ";
        cin >> price;
    }
    friend void calculateBill(FoodOrder);
};

void calculateBill(FoodOrder F) {
    cout << "\nOrder Details: " << endl;
    cout << "Order ID   : " << F.id << endl;
    cout << "Food Item  : " << F.item << endl;
    cout << "Quantity   : " << F.qty << endl;
    cout << "Price/Unit : " << F.price << endl;
    cout << "Total Bill : " << (F.qty * F.price) << endl;
}

int main() {
    FoodOrder *F = new FoodOrder();
    calculateBill(*F);

    delete F;
    return 0;
}