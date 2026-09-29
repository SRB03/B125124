#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0){
        count = c;
    }

    Counter operator++(){
        ++count;
        return *this;
    }

    Counter operator++(int a){
        Counter temp = *this;
        count++;
        return temp;
    }

    void display(){
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter counter(5);
    cout << "Initial: "; counter.display();
    ++counter;
    cout << "Prefix: "; counter.display();
    counter++;
    cout << "Postfix: "; counter.display();
}
