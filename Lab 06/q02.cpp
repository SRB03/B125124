#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0){
        real = r; 
        imag = i;
    }

    Complex operator -(Complex c){
        return Complex(real - c.real, imag - c.imag);
    }

    void display(){
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main(){
    Complex c1(8, 5), c2(3, 2);
    Complex cResult = c1 - c2;
    cResult.display();

    return 0;
}