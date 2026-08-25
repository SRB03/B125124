#include <iostream>
using namespace std;

class Comparison{
public:
    int add(int a, int b){
        return a + b;
    }
    int add(int a, int b, int c){
        return a + b + c;
    }
    float add(float a, float b){
        return a + b;
    }
};

int main(){
    Comparison calc;

    int a, b, c;
    float p, q;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Addition of two integers: " << calc.add(a, b) << endl;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Addition of three integers: " << calc.add(a, b, c) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> p >> q;
    cout << "Addition of two floats: " << calc.add(p, q) << endl;

    return 0;
}