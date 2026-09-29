#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v = 0){
        value=v;
    }

    Number operator-(){
        return Number(-value);
    }

    void display(){
        cout << value << endl;
    }
};

int main(){
    Number n1(25);
    Number n2 = -n1;
    cout << "Original n1: "; n1.display();
    cout << "Negated n2: "; n2.display();
}