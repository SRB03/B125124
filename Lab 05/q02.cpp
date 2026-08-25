#include <iostream>
using namespace std;

class Comparison{
public:
    int max(int a, int b){
        if(a>b)
            return a;
        return b;
    }

    float max(float a, float b){
        if(a > b)
            return a;
        return b;
    }

    int max(int a, int b, int c){
        if(a > b){
            if(a > c){
                return a;
            } else 
                return c;
        } else {
            if(b > c){
                return b;
            } else
                return c;
        }
    }
};

int main(){
    Comparison comp;

    int a, b, c;
    float p, q;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum of two integers: " << comp.max(a, b) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> p >> q;
    cout << "Maximum of two floats: " << comp.max(p, q) << endl;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Maximum of three integers: " << comp.max(a, b, c) << endl;

    return 0;
}