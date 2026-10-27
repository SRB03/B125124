#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual int calculateTarget(int firstInningsScore) {
        return firstInningsScore + 1;
    }
};

class T20Match : public MatchFormat {
public:
    int calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.01); // 1% rounded up
        return firstInningsScore + margin;
    }
};

class ODIMatch : public MatchFormat {
public:
    int calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.02); // 2% rounded up
        return firstInningsScore + margin;
    }
};

int main() {
    int score = 185;
    cout << "First Innings Score: " << score << endl;

    T20Match t20;
    ODIMatch odi;

    cout << "T20 Target (1% margin) : " << t20.calculateTarget(score) << endl;
    cout << "ODI Target (2% margin) : " << odi.calculateTarget(score) << endl;

    return 0;
}
