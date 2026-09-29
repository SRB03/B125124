#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string n = "", double p = 0.0, int q = 0){
        name=n;
        price=p;
        quantity=q;
    }

    Product operator+(Product p){
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        } else {
            cout << "Cannot add products with different names or prices" << endl;
            return Product("", 0.0, 0);
        }
    }

    bool operator>(Product p){
        return (this->price * this->quantity) > (p.price * p.quantity);
    }

    double getTotalValue(){
        return price * quantity;
    }

    void display(){
        cout << "Product: " << name << " Quantity: " << quantity << " Total Value: " << getTotalValue() << endl;
    }
};

int main() {
    Product prod1("Pen", 10.0, 5), prod2("Pen", 10.0, 15);
    Product combinedProd = prod1 + prod2;
    combinedProd.display();

    Product prodA("Notebook", 50.0, 2);
    Product prodB("Folder", 30.0, 4);
    if (prodA > prodB)
        cout << "Notebook has higher total value" << endl;
    else
        cout << "Folder has higher total value" << endl;
}
